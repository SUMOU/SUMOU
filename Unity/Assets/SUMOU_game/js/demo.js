#pragma strict

private var MainCam : Camera;//メインカメラ
private var FirstCam : Camera;//一人称視点カメラ
private var MainAudioListener : AudioListener;//よくわからんけど必要みたい？ ないと警告が出る
private var FirstAudioListener : AudioListener;

//勝敗カメラ
var ResCam:Camera;
var ResAudioListener : AudioListener;
var RoteCam:GameObject;

//回転用
var rote : int=1;
var rote_count : int=0;
var rote_flg : boolean=false;
var timer:float=0;



/************************
* フェード イン/アウト
************************/
private var texture : Texture2D;
private var sequence : String = null;
private var from : Color;
private var to : Color;
private var now : Color; 
private var time : float;

//遷移時フェードイン
FadeOut( 0, Color.black );
FadeIn( 0.7, Color.black );



//力士名設定
var names = new Array ();
names[0]="白\n鵬";
names[1]="朝\n青\n龍";
names[2]="大\n鵬";
names[3]="千\n代\nの\n富\n士";
names[4]="北\nの\n湖";
names[5]="貴\n乃\n花";

//選択された力士番号
var rikishi_No : int=0;


//力士名変更用
var user_name:GameObject;
var name_tm:TextMesh;
var user_name2:GameObject;
var name_tm2:TextMesh;

//勝敗
var res_user:GameObject;
var res_user_tm:TextMesh;
var res_enemy:GameObject;
var res_enemy_tm:TextMesh;



//勝ち負け 1=勝ち , 0=負け　Booleanだと画面遷移時にデータを渡せない
var result : int=0;

//勝ち負け　文字変更用
var res_mes:GameObject;
var res_mes_tm:TextMesh;


//ゲーム終了判定
var end_flg : boolean=false;

//力士モデル取得
var rikishi_user:GameObject;
var rikishi_enemy:GameObject;

//勝敗のモーション取得
var res_move : RuntimeAnimatorController;

//回転アニメーション終了後 chage_fadeが呼び出され続けるのを防ぐ
var end1st : boolean=true;


function Start () {
	
	//選択された力士番号
	if(PlayerPrefs.GetInt("select_No")){
		var rikishi_No = PlayerPrefs.GetInt("select_No");
	}

	//力士モデル取得
	rikishi_user = GameObject.Find("rikisi_user");
	rikishi_enemy = GameObject.Find("rikisi_enemy");
	
	

	MainCam = GameObject.Find("Main Camera").GetComponent.<Camera>();
	FirstCam = GameObject.Find("Camera_FirstPerson").GetComponent.<Camera>();
	MainAudioListener = GameObject.Find("Main Camera").GetComponent.<AudioListener>();
	FirstAudioListener = GameObject.Find("Camera_FirstPerson").GetComponent.<AudioListener>();
	

	

	//勝敗カメラ回転用要素
	RoteCam = GameObject.Find("RoteCameras");
	
	//回転用カメラ切り替え用
	ResCam = GameObject.Find("ResCamera").GetComponent.<Camera>();
	ResAudioListener = GameObject.Find("ResCamera").GetComponent.<AudioListener>();
	ResCam.enabled = false;
	ResAudioListener.enabled = false;



	
	//初期ではメインカメラを有効にする
	//変数名.enabled　で描画するか否かを指定できる
	MainCam.enabled = true;
	MainAudioListener.enabled = true;
	FirstCam.enabled = false;
	FirstAudioListener.enabled = false;
	
	
	
	//力士名と勝敗
	user_name = GameObject.Find("user_name");
	name_tm = user_name.GetComponent("TextMesh");
	name_tm.text = names[rikishi_No];

	user_name2 = GameObject.Find("res_user_name");
	name_tm2 = user_name2.GetComponent("TextMesh");
	name_tm2.text = names[rikishi_No];

	res_user = GameObject.Find("res_user");
	res_user_tm = res_user.GetComponent("TextMesh");
	res_enemy = GameObject.Find("res_enemy");
	res_enemy_tm = res_enemy.GetComponent("TextMesh");


	//負けたときのメッセージ変更用
	res_mes = GameObject.Find("res_mes");
	res_mes_tm = res_mes.GetComponent("TextMesh");

	// シーン情報をサーバに送信
  Application.ExternalCall("setScene", "game_play");

  // 観戦側に情報を発信
  Application.ExternalCall("gameStart");
	
}

function Update () {

	if(transform.position.z <= 7){
		transform.position.z += 1;
		// transform.position.z = 7; //期待値z軸25
	}//徐々に名前が近づいてくる。

	//アニメーション終了時にhakuho・asashoryuが削除される
	var user_name = gameObject.Find("user_name");
	var enemy_name = gameObject.Find("enemy_name");
	Destroy(user_name,10);
	Destroy(enemy_name,10);

	// アニメーション終了と同時にカメラが切り替わる
	// Invoke("CamChange",11);
	
	
	
	
	
	
	/*******************
	* ゲーム終了判定
	*******************/
	//左クリック　勝ち
	if(Input.GetMouseButtonDown(0) && end_flg == false){
		result = 1;
		//勝利モーション
		res_move = GameObject.Find("pauseWin").GetComponent.<Animator>().runtimeAnimatorController;
		game_end();
	}
	//右クリック　負け
	if(Input.GetMouseButtonDown(1) && end_flg == false){
		//敗北モーション
		res_move = GameObject.Find("pauseLose").GetComponent.<Animator>().runtimeAnimatorController;
		res_mes_tm.text = "敗北";
		res_user_tm.color =Color.black;
		res_enemy_tm.color =Color.white;
		game_end();
	}


	//勝敗 カメラ回転
	if(end_flg && rote_flg == false){
		//Update関数は1秒毎に実行される
		timer += Time.deltaTime;	//daltaTime = 前フレームとの差分の秒数
		
		//n秒間実行(回転)
		if(timer < 10.4){
		   RoteCam.transform.Rotate ( 0, 1.4 , 0 );
		}else{
			rote_flg = true;
		}

		//画面遷移前のフェードアウト
		Invoke( "change_fade", 10.4 );

		
		//アニメーション終了前に遷移する　【Enterキー押下】
		if(Input.GetKeyDown(KeyCode.Return)){
			change_fade();
		}
	}

}

/************************
* ゲーム終了　勝ち/負け
************************/
function game_end(){

	// 試合終了時間取得
	Application.ExternalCall("getTime");

	end_flg = true;	
	//勝敗モーションセット
	rikishi_user.GetComponent.<Animator>().runtimeAnimatorController = res_move;
	
	//所定の位置と向きに変更
	rikishi_user.transform.Rotate(0,90,0);
	rikishi_user.transform.position.x = 30;
	rikishi_user.transform.position.z = 2;
	
	//カメラ切り替え
	GameObject.Find("Camera_FirstPerson").SetActive(false);
	MainCam.enabled = false;
	MainAudioListener.enabled = false;
	ResCam.enabled = true;
	ResAudioListener.enabled = true;

	Destroy(gameObject.Find("user_name"));
	Destroy(gameObject.Find("enemy_name"));
	Destroy(rikishi_enemy);

}


/*******************
* 遷移前のフェード
*******************/
function change_fade(){
	//Update内で呼び出され続けられるので1回しか処理させない
	if(end1st){
		FadeOut( 1, Color.black );
		Invoke( "window_change", 1 );
	}
	end1st = false;
}

/***********
* 画面遷移
***********/
function window_change(){

	//次の画面に勝敗結果を渡す
	PlayerPrefs.SetInt("result", result);

	//ゲーム画面遷移
	Application.LoadLevel("game_end");
}



function CamChange(){
	MainCam.enabled = false;
	MainAudioListener.enabled = false;
	FirstCam.enabled = true;
	FirstAudioListener.enabled = true;
}







/************************
* フェード イン/アウト
************************/
function Awake(){
    texture = new Texture2D( 1, 1, TextureFormat.ARGB32, false );
    texture.SetPixel(0,0, Color.white );
    texture.Apply();
}

function OnGUI(){
    if( now.a != 0 ){
    GUI.color = now;
    GUI.DrawTexture( Rect( 0, 0, Screen.width, Screen.height ), texture );
    }
}

function StartSequence( function_name : String ){
    if( sequence ){
    StopCoroutine( sequence );
    sequence = null;
    }
    sequence = function_name;
    StartCoroutine( sequence );
}

function FadeUpdate(){
    var now_time : float = 0;
    while( 0 < time && now_time < time ){ 
    now_time += Time.deltaTime;
    now = Color.Lerp( from, to, now_time / time );
    yield;
    }
    now = to;
}

function FadeIn( t_time : float, t_color : Color ){
    to = from = t_color;
    to.a = 0;
    time = t_time;
    StartSequence( "FadeUpdate" );
}
function FadeOut( t_time : float , t_color : Color ){
    to = from = t_color;
    from.a = 0;
    time = t_time;
    StartSequence( "FadeUpdate" );
}

function Zabuton (){
		Application.ExternalCall("console.log", "座布団！");
}

/*******************
* ゲーム終了判定
*******************/
//wキー　勝ち
function Win (){
	if(end_flg == false){
		result = 1;
		//勝利モーション
		res_move = GameObject.Find("pauseWin").GetComponent.<Animator>().runtimeAnimatorController;
		Application.ExternalEval("win_num++");
		game_end();
	}
}

//lキー　負け
function Lose () {
	if(end_flg == false){
		//敗北モーション
		res_move = GameObject.Find("pauseLose").GetComponent.<Animator>().runtimeAnimatorController;
		res_mes_tm.text = "敗北";
		res_user_tm.color =Color.black;
		res_enemy_tm.color =Color.white;
		game_end();
	}
}