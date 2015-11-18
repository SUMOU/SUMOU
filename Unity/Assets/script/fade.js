#pragma strict
//
//
// フェードイン、フェードアウト
//
//
private var texture : Texture2D;
private var sequence : String = null;
private var from : Color;
private var to : Color;
private var now : Color; 
private var time : float ;
 
function Awake()
{
    texture = new Texture2D( 1, 1, TextureFormat.ARGB32, false );
    texture.SetPixel(0,0, Color.white );
    texture.Apply();
}
 
function Start () {
}
 
function Update () {
    if( Input.GetButtonDown( "Fire1" )  ){
    FadeIn( 1, Color.white );
    }
    if( Input.GetButtonDown( "Fire2" )  ){
    FadeOut( 1, Color.white );
    }
}
 
 
function OnGUI()
{
    if( now.a != 0 ){
    GUI.color = now;
    GUI.DrawTexture( Rect( 0, 0, Screen.width, Screen.height ), texture );
    }
}
 
function StartSequence( function_name : String )
{
    if( sequence ){
    StopCoroutine( sequence );
    sequence = null;
    }
    sequence = function_name;
    StartCoroutine( sequence );
}
 
 
function FadeUpdate()
{
    var now_time : float = 0;
    while( 0 < time && now_time < time ){ 
    now_time += Time.deltaTime;
    now = Color.Lerp( from, to, now_time / time );
    yield;
    }
    now = to;
}
 
function FadeIn( t_time : float, t_color : Color )
{
    to = from = t_color;
    to.a = 0;
    time = t_time;
    StartSequence( "FadeUpdate" );
}
 
 
function FadeOut( t_time : float , t_color : Color )
{
    to = from = t_color;
    from.a = 0;
    time = t_time;
    StartSequence( "FadeUpdate" );
}