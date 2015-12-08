﻿#pragma strict

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
public var sound : AudioSource;		//AudioSourceコンポーネント
public var SE_select : AudioClip;	//音を代入


/**************************
*  キャラテキスト変更用
**************************/
var rikishi_name:GameObject;
var rikishi_detail:GameObject;
var name_tm:TextMesh;
var detail_tm:TextMesh;

//力士画像
var d_img:GameObject;
var img_box:GameObject;

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


//力士格納ゲームオブジェクト取得用（初期状態が非アクティブ{非表示}のオブジェクトは親から子の順で取得する）
var rikishis:GameObject;

//力士モデル取得用
var rikishi : GameObject[] = new GameObject[6]; //GameObjectの配列はUnityの組み込み配列を使う



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

	//格納された画像取得
	d_img = GameObject.Find("rikishi_image");
	img_box = GameObject.Find("detail_image_box");


	//力士格納ゲームオブジェクト取得
	rikishis = GameObject.Find("rikishis");
	
	//iより1多い変数（i+1での取得は上手くいかない）
	var i1:int=1;
	//力士取得
	for(var i:int=0 ; i<=5 ; i++){
		rikishi[i] = rikishis.transform.Find("rikishi"+i1).gameObject;
		i1++;
	}

	rikishi[0].SetActive(true);

	Debug.Log("char_select is move OK");

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
	FadeOut( 1.2, Color.black );
	Invoke( "window_change", 1.2 );	//1.2秒後
}

//■張り手
//キャラ選択決定
function window_change(){

	//次の画面にselect_Noを渡す
	PlayerPrefs.SetInt("select_No", select_No);

	//ゲーム画面遷移
	Application.LoadLevel("demo");

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
	for(var i:int = 0 ; i<=5 ; i++){
		rikishi[i].SetActive(false);
	}
	//該当力士表示
	rikishi[select_No].SetActive(true);
	
	//画像変更
	d_img.GetComponent.<MeshRenderer>().material = img_box.GetComponent.<MeshRenderer>().materials[select_No];

	
	//力士名と詳細情報表示
	name_tm.text = names[select_No];
	detail_tm.text = details[select_No];

	//文字数が多い力士はフォントサイズを変更
	if(select_No == 3){
		name_tm.fontSize = 84;
	}else{
		name_tm.fontSize = 120;
	}

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
