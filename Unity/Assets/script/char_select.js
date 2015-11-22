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
FadeIn( 1, Color.black );

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
names[0]="力\n士\n1";
names[1]="力\n士\n2";
names[2]="力\n士\n3";
names[3]="力\n士\n4";
names[4]="力\n士\n5";
names[5]="力\n士\n6";

//キャラ毎の詳細
var details = new Array ();
details[0]="2015年11月4日生\n最終番付：大関\n十両優勝1回\n幕下優勝1回\n序ノ口優勝1回";
details[1]="優勝2回";
details[2]="優勝3回";
details[3]="優勝4回";
details[4]="優勝5回";
details[5]="優勝6回";


//マテリアル使用の宣言
var materials:Material[];

//選択されているキャラクタと番号（0～5）
var select_char;
var select_No : int=0;

var rikishi : GameObject[] = new GameObject[6]; // 久保の変更点①：GameObjectの配列はUnityの組み込み配列を使う

rikishi[0] = GameObject.Find("rikishi1");
rikishi[1] = GameObject.Find("rikishi2");
rikishi[2] = GameObject.Find("rikishi3");
rikishi[3] = GameObject.Find("rikishi4");
rikishi[4] = GameObject.Find("rikishi5");
rikishi[5] = GameObject.Find("rikishi6");


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
	for(var i:int = 1 ; i<=5 ; i++){// 久保の変更点②：for文で新規に変数宣言する場合も型付きで宣言する
    rikishi[i].SetActiveRecursively(false);
	}

	Debug.Log("char_select is move OK");

}
//表示されている間繰り返し実行される関数
function Update () {

	//Destroy(char4.gameObject);

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
		window_change();
	}

	
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
	PlayerPrefs.SetInt("select_No", select_No);
}

//■張り手
//キャラ選択決定
function window_change(){

	//ゲーム画面遷移
	Application.LoadLevel("banduke");

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
