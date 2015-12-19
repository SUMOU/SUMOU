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

//遷移時フェードイン
FadeOut( 0, Color.black );
FadeIn( 0.2, Color.black );


/**************
*  音声宣言
**************/
public var sound : AudioSource; //AudioSourceコンポーネント
public var SE_select : AudioClip;   //音を代入


//最初の1回実行される関数
function Start () {

	//効果音取得
	sound = this.gameObject.GetComponent(AudioSource);
	
	Debug.Log("title is move OK");

    // シーン情報をサーバに送信
    Application.ExternalCall("setScene", "title");
    // ゲーム結果情報リセット
    Application.ExternalCall("resetRsult");
}

//表示されている間繰り返し実行される関数
function Update () {

	//■スマホがまわしにセットされたら
	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){
		
		//効果音再生
		sound.PlayOneShot(SE_select);
		
		//一瞬画面を白くする
		FadeIn( 0.6, Color.white );

		//2秒後にfadeOを実行
		Invoke( "fadeO", 2 );
		
	}

}

function SetPhone(){
    //■スマホがまわしにセットされたら
        
    //効果音再生
    sound.PlayOneShot(SE_select);
    
    //一瞬画面を白くする
    FadeIn( 1, Color.white );

    //2秒後にfadeOを実行
    Invoke( "fadeO", 2 );

}


//画面遷移用フェードアウト
function fadeO(){
	FadeOut( 0.7, Color.black );
	Invoke( "window_change", 0.7 );
}


//画面遷移
function window_change(){
	Application.LoadLevel("char_select");
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
