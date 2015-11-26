//#pragma strict

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

/**************
*  音声宣言
**************/
public var sound : AudioSource; //AudioSourceコンポーネント
public var SE_select : AudioClip;   //音を代入


/**************************
*  キャラテキスト変更用
**************************/
var rikishi_name:GameObject;
var rikishi_detail:GameObject;
var name_tm:TextMesh;
var detail_tm:TextMesh;

//キャラ名
var names = new Array ();
names[0]="白\n鵬";
names[1]="朝\n青\n龍";
names[2]="大\n鵬";
names[3]="千\n代\nの\n富\n士";
names[4]="北\nの\n湖";
names[5]="貴\n乃\n花";

//キャラ毎の詳細
var details = new Array ();
details[0]="番付 横綱\n生年月日 1985年3月11日\n優勝回数合計 35回\n得意技\n右四つ・寄り";
details[1]="番付 横綱\n生年月日 1980年9月27日\n優勝回数 25回\n得意技\n突っ張り、左四つ、寄り\n投げ";
details[2]="番付 横綱\n生年月日 1940年5月29日\n優勝回数 32回\n得意技\n左四つ、寄り、掬い投げ\n上手投げ";
details[3]="番付 横綱\n生年月日 1955年6月1日\n優勝回数 31回\n得意技\n右四つ、寄り、上手投げ";
details[4]="番付 横綱\n生年月日 1953年5月16日\n優勝回数 24回\n得意技\n左四つ、吊り、寄り\n上手投げ";
details[5]="番付 横綱\n生年月日 1972年8月12日\n優勝回数 22回\n得意技\n突っ張り、右四つ、左四つ\n寄り、上手投げ";


//マテリアル使用の宣言
var materials:Material[];

//選択されているキャラクタと番号（0～5）
var select_No : int=0;


var rikishi : GameObject[] = new GameObject[6]; //GameObjectの配列はUnityの組み込み配列を使う
rikishi[0] = GameObject.Find("rikishi1");
rikishi[1] = GameObject.Find("rikishi2");
rikishi[2] = GameObject.Find("rikishi3");
rikishi[3] = GameObject.Find("rikishi4");
rikishi[4] = GameObject.Find("rikishi5");
rikishi[5] = GameObject.Find("rikishi6");


//力士選択後のモーション取得
var select_move : RuntimeAnimatorController;
select_move = GameObject.Find("move1").GetComponent.<Animator>().runtimeAnimatorController;


//最初の1回実行される関数
function Start () {
	
	//効果音取得
	sound = this.gameObject.GetComponent(AudioSource);
	
	//キャラテキスト取得
	rikishi_name = GameObject.Find("rikishi_name");
	rikishi_detail = GameObject.Find("rikishi_detail");
	name_tm = rikishi_name.GetComponent("TextMesh");
	detail_tm = rikishi_detail.GetComponent("TextMesh");
	
	//力士2以降非表示（Inspectorのオブジェクト名左のチェックをはずした状態）
	//SetActiveは該当要素のみ
	//SetActiveRecursivelyは階層も含めた要素
	for(var i:int = 1 ; i<=5 ; i++){//forで変数宣言する場合も型付きで宣言する
	    rikishi[i].SetActiveRecursively(false);
	}
	rikishi[0].SetActiveRecursively(true);

	Debug.Log("char_select is move OK");

  // シーン情報をサーバに送信
  Application.ExternalCall("setScene", "char_select");

}

//表示されている間繰り返し実行される関数
function Update () {

	//■上下の動き
	//上キー押下
	if(Input.GetKeyDown(KeyCode.UpArrow)){
		select_moves("up");
		//Debug.Log(GameObject.Find("char"+select_No).GetComponent.<MeshRenderer>().material);
	}
	//下キー押下
	if(Input.GetKeyDown(KeyCode.DownArrow)){
		select_moves("down");
	}

	//■張り手
	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){
		animation_change();
	}
	
}


//■張り手
//アニメーションチェンジ
function animation_change(){
	rikishi[select_No].GetComponent.<Animator>().runtimeAnimatorController = select_move;
	Invoke( "window_change", 0.5 );	//0.5秒後
}

//■張り手
//キャラ選択決定
function window_change(){

	//ゲーム画面遷移
	Application.LoadLevel("demo");

  // キャラ選択情報をDBに送信
  Application.ExternalCall("rikishi_set", select_No);
}




//■上下の動き
//カーソル移動
function select_moves(direction){

	//効果音再生
	sound.PlayOneShot(SE_select);

	//カーソル移動前のマテリアル（選択から外れたキャラの色）変更
	GameObject.Find("char"+select_No).GetComponent.<MeshRenderer>().material = materials[0];

	//上に移動
	if(direction == "up"){
		//1番上にいた
		if(select_No == 0){
			select_No = 5;
		}else{
			select_No--;
		}
	}
	//下に移動
	else if(direction == "down"){
		//1番下にいた
		if(select_No == 5){
			select_No = 0;
		}else{
			select_No++;
		}
	}

	//カーソル移動後のマテリアル（選択キャラの色）変更
	GameObject.Find("char"+select_No).GetComponent.<MeshRenderer>().material = materials[1];

	//一旦全ての力士を非表示
	for(var i=0 ; i<=5 ; i++){
		rikishi[i].SetActiveRecursively(false);
	}
	//該当力士表示
	rikishi[select_No].SetActiveRecursively(true);
	
	//力士名と詳細情報表示
	name_tm.text = names[select_No];
	detail_tm.text = details[select_No];


	//次の画面にselect_Noを渡す
	//この関数外で使用すると値が正常に渡せない
	PlayerPrefs.SetInt("select_No", select_No);
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
