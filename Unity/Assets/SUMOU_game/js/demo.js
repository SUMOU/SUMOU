#pragma strict

var MainCam : Camera;//メインカメラ
var FirstCam : Camera;//一人称視点カメラ
var MainAudioListener : AudioListener;//よくわからんけど必要みたい？ ないと警告が出る
//var FirstAudioListener : AudioListener;


/*************
* 勝敗カメラ
*************/
var ResCam:Camera;
//var ResAudioListener : AudioListener;
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

//ゲーム開始時カメラ遷移フラグ
var cam_flg1 : boolean=false;	//スタート時カメラを下へ動かすアニメーション
var cam_flg2 : boolean=false;	//スタート時カメラアニメーション全体
var cam_flg3 : boolean=false;	//力士視点に変更



/***************
* 力士名等文字
***************/
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

//開始時の力士名（プレイヤー）
var user_name:GameObject;
var user_name_tm:TextMesh;

//終了後の力士名（プレイヤー）
var user_name2:GameObject;
var user_name_tm2:TextMesh;

//開始時の力士名（敵）
var enemy_name:GameObject;
var enemy_name_tm:TextMesh;

//終了後の力士名（敵）
var enemy_name2:GameObject;
var enemy_name_tm2:TextMesh;

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



/****************
* 敵キャラ用乱数
****************/
var r:int;
var r_loop : boolean=false;



/****************************
* 力士モデル/アニメーション
****************************/
//力士格納ゲームオブジェクト取得用（初期状態が非アクティブ{非表示}のオブジェクトは親から子の順で取得する）
var rikishis1:GameObject;
var rikishis2:GameObject;

//力士モデル取得用
var user_rikishi : GameObject;
var enemy_rikishi : GameObject;

//スタート時の四股踏み
var user_shiko : RuntimeAnimatorController;
var enemy_shiko : RuntimeAnimatorController;


//勝敗のモーション取得
var res_move : RuntimeAnimatorController;

//回転アニメーション終了後 chage_fadeが呼び出され続けるのを防ぐ
var end1st : boolean=true;



//ゲーム終了判定
var end_flg : boolean=false;
var res_fade1 : boolean=false;	//フェードアウト


//紙ふぶき取得
var kami:GameObject;


function Start () {
	
	/***************
	* 紙ふぶき取得
	***************/
	kami = GameObject.Find("kamifubuki");
	kami.SetActive(false);
	
	
	/*******************
	* 自分,敵力士セット
	*******************/
	//選択された力士番号取得
	if(PlayerPrefs.GetInt("select_No")){
		rikishi_No = PlayerPrefs.GetInt("select_No");
		rikishi_No++;
	}else{
		rikishi_No=1;
	}

	//力士格納ゲームオブジェクト取得
	rikishis1 = GameObject.Find("user");
	rikishis2 = GameObject.Find("enemy");
	
	//選択されたキャラ取得と表示
	user_rikishi = rikishis1.transform.Find("rikishi"+rikishi_No).gameObject;	
	user_rikishi.SetActive(true);
	// 選ばれた力士にスクリプトを当てる
	user_rikishi.AddComponent.<action_user>();
	
	//敵キャラの決定
	while(r_loop == false){

		//乱数
		r = Random.Range(1, 7);

		//プレイヤーと違う力士の場合ループから抜ける
		if(r != rikishi_No){
			r_loop = true;
		}
		
	}
	//敵力士表示
	enemy_rikishi = rikishis2.transform.Find("rikishi"+r).gameObject;	
	enemy_rikishi.SetActive(true);
	// 選ばれた力士にスクリプトを当てる
	enemy_rikishi.AddComponent.<action_enemy>();
	
	//四股アニメーション取得
	user_shiko = GameObject.Find("shiko"+rikishi_No).GetComponent.<Animator>().runtimeAnimatorController;
	enemy_shiko = GameObject.Find("shiko"+r).GetComponent.<Animator>().runtimeAnimatorController;
	

	
	MainCam = GameObject.Find("Main Camera").GetComponent.<Camera>();
	FirstCam = GameObject.Find("Camera_FirstPerson").GetComponent.<Camera>();
	MainAudioListener = GameObject.Find("Main Camera").GetComponent.<AudioListener>();
	//FirstAudioListener = GameObject.Find("Camera_FirstPerson").GetComponent.<AudioListener>();
	

	/***********************
	* ゲーム後解転用カメラ
	***********************/
	RoteCam = GameObject.Find("RoteCameras");
	
	//回転用カメラ切り替え用
	ResCam = GameObject.Find("ResCamera").GetComponent.<Camera>();
	//ResAudioListener = GameObject.Find("ResCamera").GetComponent.<AudioListener>();
	ResCam.enabled = false;
	//ResAudioListener.enabled = false;


	
	//初期ではメインカメラを有効にする
	//変数名.enabled　で描画するか否かを指定できる
	MainCam.enabled = true;
	MainAudioListener.enabled = true;
	FirstCam.enabled = false;
	//FirstAudioListener.enabled = false;
	
	
	
	/*****************
	* 各種メッセージ
	*****************/
	//プレイヤー
	user_name = GameObject.Find("user_name");
	user_name_tm = user_name.GetComponent("TextMesh");
	user_name_tm.text = names[rikishi_No-1];
	user_name2 = GameObject.Find("res_user_name");
	user_name_tm2 = user_name2.GetComponent("TextMesh");
	user_name_tm2.text = names[rikishi_No-1];

	//敵
	enemy_name = GameObject.Find("enemy_name");
	enemy_name_tm = enemy_name.GetComponent("TextMesh");
	enemy_name_tm.text = names[r-1];
	enemy_name2 = GameObject.Find("res_enemy_name");
	enemy_name_tm2 = enemy_name2.GetComponent("TextMesh");
	enemy_name_tm2.text = names[r-1];


	//勝敗（○/●）
	res_user = GameObject.Find("res_user");
	res_user_tm = res_user.GetComponent("TextMesh");
	res_enemy = GameObject.Find("res_enemy");
	res_enemy_tm = res_enemy.GetComponent("TextMesh");

	//負けたときのメッセージ変更用（勝利/敗北）
	res_mes = GameObject.Find("res_mes");
	res_mes_tm = res_mes.GetComponent("TextMesh");


	// シーン情報をサーバに送信
  Application.ExternalCall("setScene", "game_play");

  // 観戦側に情報を発信
  Application.ExternalCall("gameStart");
	
}



function Update () {

	/*********************
	* ゲームスタート演出
	*********************/
	if(cam_flg2 == false){
		//文字位置変更
		if(transform.position.z <= -269){
			transform.position.z += 1;
			transform.position.y -= 0.6;
		}
		//カメラ位置変更（下へ）
		if(MainCam.transform.position.y >= 100 && cam_flg1 == false){
			MainCam.transform.position.y -= 1;
			MainCam.transform.rotation.x -= 0.0009;
		}
		//カメラ位置変更（前へ）
		else if(MainCam.transform.position.z <= -20){
			//1回だけモデルを動かす（四股踏み）
			if(cam_flg1 == false){
				StartCoroutine("move_model");
			}
			cam_flg1 = true;
			MainCam.transform.position.z += 2.1;
			MainCam.transform.rotation.x -= 0.00072;
			MainCam.transform.position.y -= 0.63;
//			MainCam.transform.position.z += 1.5;
//			MainCam.transform.rotation.x -= 0.00032;
//			MainCam.transform.position.y -= 0.44;
		}else{
			cam_flg2 = true;
		}
	}


	/**************************
	* ゲーム開始直前 視点変更
	**************************/
	if(cam_flg2 && cam_flg3 == false){
		//視点変更
		StartCoroutine("perspective_change");

	}
	
	
	/*******************
	* ゲーム終了判定
	*******************/
	//左クリック　勝ち
	if(Input.GetMouseButtonDown(0) && end_flg == false){

		result = 1;
		//勝敗フェード呼び出し
		StartCoroutine("res_fadeOut");
	
	}
	//右クリック　負け
	if(Input.GetMouseButtonDown(1) && end_flg == false){

		res_mes_tm.text = "敗北";
		res_user_tm.color =Color.black;
		res_enemy_tm.color =Color.white;

		//勝敗フェード呼び出し
		StartCoroutine("res_fadeOut");
		
	}


	/******************
	* 勝敗 カメラ回転
	******************/
	if(end_flg && rote_flg == false){
		//Update関数は1秒毎に実行される
		timer += Time.deltaTime;	//daltaTime = 前フレームとの差分の秒数
		
		//n秒間実行(回転)
		if(timer < 14){
		   RoteCam.transform.Rotate ( 0, 0.8 , 0 );
		}else{
			rote_flg = true;
		}

		//画面遷移前のフェードアウト
		Invoke( "change_fade", 14 );

		
		//アニメーション終了前に遷移する　【Enterキー押下】
		if(Input.GetKeyDown(KeyCode.Return)){
			change_fade();
		}
	}

}

/**************************
* コルーチン（四股踏み）
**************************/
function move_model(): IEnumerator{

	yield  WaitForSeconds(2f);	//2秒後
	
	Debug.Log("四股踏み 開始");
	
	//アニメーション設定
	user_rikishi.GetComponent.<Animator>().runtimeAnimatorController = user_shiko;

	yield  WaitForSeconds(0.7f);	//プレイヤーと敵で少し時間を空ける
	enemy_rikishi.GetComponent.<Animator>().runtimeAnimatorController = enemy_shiko;

}



/**************************
* コルーチン（視点変更）
**************************/
function perspective_change(): IEnumerator{

	cam_flg3 = true;

	yield  WaitForSeconds(2f);	//2秒待機

	//0.7秒でフェードアウト フェードアウト中(0.4秒)は処理をストップ
	FadeOut( 0.4, Color.black );
	yield  WaitForSeconds(0.4f);

	//力士名削除
	Destroy(user_name);
	Destroy(enemy_name);

	//カメラ（視点）変更
	MainCam.enabled = false;
	MainAudioListener.enabled = false;
	FirstCam.enabled = true;
	//FirstAudioListener.enabled = true;

	//0.7秒でフェードイン
	FadeIn( 0.4, Color.black );
	yield  WaitForSeconds(1f);

	Debug.Log("視点変更 完了");

}


/**********************************
* コルーチン（勝敗フェードアウト）
**********************************/
function res_fadeOut(): IEnumerator{

	Debug.Log("勝敗 画面フェードアウト中…");
	FadeOut( 0.8, Color.white );
	yield  WaitForSeconds(0.8f);

	//勝敗モーション
	if(result == 1){
		//紙ふぶきを降らせる
		kami.SetActive(true);
		res_move = GameObject.Find("pauseWin").GetComponent.<Animator>().runtimeAnimatorController;
	}else{
		res_move = GameObject.Find("pauseLose").GetComponent.<Animator>().runtimeAnimatorController;
	}
	game_end();

}

/************************
* ゲーム終了　勝ち/負け
************************/
function game_end(){

	// 試合終了時間取得
	Application.ExternalCall("getTime");

	end_flg = true;	
	
	//勝敗モーションセット
	user_rikishi.GetComponent.<Animator>().runtimeAnimatorController = res_move;
	
	//所定の位置と向きに変更
	user_rikishi.transform.Rotate(0,90,0);
	user_rikishi.transform.position.x = 30;
	user_rikishi.transform.position.z = 2;
	
	//カメラ切り替え
	GameObject.Find("Camera_FirstPerson").SetActive(false);
	MainCam.enabled = false;
	MainAudioListener.enabled = false;
	ResCam.enabled = true;
	//ResAudioListener.enabled = true;

	Destroy(gameObject.Find("user_name"));
	Destroy(gameObject.Find("enemy_name"));
	Destroy(enemy_rikishi);

	FadeIn( 0.6, Color.white );

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
		Application.ExternalEval("win_num++");
		//勝敗フェード呼び出し
		StartCoroutine("res_fadeOut");
	}
}

//lキー　負け
function Lose () {
	if(end_flg == false){
		res_mes_tm.text = "敗北";
		res_user_tm.color =Color.black;
		res_enemy_tm.color =Color.white;

		//勝敗フェード呼び出し
		StartCoroutine("res_fadeOut");
	}
}