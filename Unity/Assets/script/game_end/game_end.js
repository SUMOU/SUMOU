#pragma strict


/************************
* フェード イン/アウト
************************/
private var texture : Texture2D;
private var sequence : String = null;
private var from : Color;
private var to : Color;
private var now : Color; 
private var time : float;


/**************
*  音声宣言
**************/
public var sound : AudioSource;		//AudioSourceコンポーネント
public var SE_select : AudioClip;	//音を代入



//遷移時フェードイン
FadeOut( 0, Color.black );
FadeIn( 0.5, Color.black );

//ゲーム終了画面オブジェクト
var bar:GameObject;


//勝ち負け取得　1=勝ち , 0=負け
var result : int=1;

//文字色変更用
var materials:Material[];
var select_No : int=0;

function Start () {
	
	//勝ち負け取得
	if(PlayerPrefs.GetInt("result")){
		result = PlayerPrefs.GetInt("result");
	}

	//負けたときの文字
	if(result == 0){
		//敗北時用の文字（再挑戦）を取得
		GameObject.Find("after0").GetComponent.<MeshRenderer>().material = materials[7];
	}

	bar = GameObject.Find("bar");
	
	//効果音取得
	sound = this.gameObject.GetComponent(AudioSource);


	Debug.Log("game_end is move OK");

  // シーン情報をサーバに送信
  Application.ExternalCall("setScene", "game_end");
}

function Update () {

	//■上下の動き
	//上キー押下
	if(Input.GetKeyDown(KeyCode.UpArrow)){
		select_moves("up");
	}
	//下キー押下
	if(Input.GetKeyDown(KeyCode.DownArrow)){
		select_moves("down");
	}

	//■張り手
	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){
		FadeOut( 0.3, Color.black );
		Invoke( "window_change", 0.3 );	//0.3秒後
	}

}


//カーソル移動
function select_moves(direction){
	
	//効果音再生
	sound.PlayOneShot(SE_select);
	
	/************************
	* カーソル変更前色変更
	************************/
	//勝敗で表示文字を変更
	if(result == 1){
		//カーソル移動前のマテリアル（選択から外れた文字の色）変更
		GameObject.Find("after"+select_No).GetComponent.<MeshRenderer>().material = materials[select_No*2];
	}else{
		//再挑戦にカーソルがあっていた場合
		if(select_No == 0){
			GameObject.Find("after0").GetComponent.<MeshRenderer>().material = materials[6];
		}else{
			GameObject.Find("after"+select_No).GetComponent.<MeshRenderer>().material = materials[select_No*2];
		}
	}
	
	/***************
	* カーソル移動
	***************/
	//上に移動
	if(direction == "up"){
		//1番上にいた
		if(select_No == 0){
			select_No = 2;
			bar.transform.Translate(0,-5.9,0);
		}else{
			select_No--;
			bar.transform.Translate(0,2.95,0);
		}
	}
	//下に移動
	else if(direction == "down"){
		//1番下にいた
		if(select_No == 2){
			select_No = 0;
			bar.transform.Translate(0,5.9,0);
		}else{
			select_No++;
			bar.transform.Translate(0,-2.95,0);
		}
	}

	/************************
	* カーソル変更後色変更
	************************/
	if(result == 1){
		//カーソル移動前のマテリアル（選択から外れた文字の色）変更
		GameObject.Find("after"+select_No).GetComponent.<MeshRenderer>().material = materials[select_No*2+1];
	}else{
		//再挑戦にカーソルがあっていた場合
		if(select_No == 0){
			GameObject.Find("after0").GetComponent.<MeshRenderer>().material = materials[7];
		}else{
			GameObject.Find("after"+select_No).GetComponent.<MeshRenderer>().material = materials[select_No*2+1];
		}
	}
}


//■張り手
//画面遷移
function window_change(){

	//画面遷移
	if(select_No == 0){

    // 前回の勝敗をサーバに送信する
    if(result == 1){
      Application.ExternalCall("winCounter",1);
    }else{
      Application.ExternalCall("winCounter",0);
    }

		Application.LoadLevel("demo");
	}
	else if(select_No == 1){

    // 前回の勝敗をサーバに送信する
    if(result == 1){
      Application.ExternalCall("winCounter",1);
    }else{
      Application.ExternalCall("winCounter",0);
    }

		Application.LoadLevel("char_select");
	}
	else if(select_No == 2){

    // 前回の勝敗をサーバに送信する
    if(result == 1){
      Application.ExternalCall("winCounter",1);
    }

    // サーバー側に情報を発信
    Application.ExternalCall("gameEnd");
		Application.LoadLevel("title");
	}

}

function Decide (){
  FadeOut( 0.3, Color.black );
  Invoke( "window_change", 0.3 ); //0.3秒後
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
