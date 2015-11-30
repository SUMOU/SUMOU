#pragma strict

//キャラ名
var names = new Array ();
names[0]="力\n士\n1";
names[1]="力\n士\n2";
names[2]="力\n士\n3";
names[3]="力\n士\n4";
names[4]="力\n士\n5";
names[5]="力\n士\n6";

var rikishi_No : int=0;

//力士名
var rikishi_name:GameObject;
var name_tm:TextMesh;

//視点移動用カメラ
var cameras:GameObject;

var rote : int=1;
var rote_count : int=0;


var timer:float=0;
var rote_flg : boolean=false;

function Start () {

	//選択された力士番号
	if(PlayerPrefs.GetInt("select_No")){
		var rikishi_No = PlayerPrefs.GetInt("select_No");
	}

	//力士名と詳細情報表示
	rikishi_name = GameObject.Find("name1");
	name_tm = rikishi_name.GetComponent("TextMesh");
	name_tm.text = names[rikishi_No];
	
	cameras = GameObject.Find("camera");
	
	Debug.Log("banduke move OK");
	
}

function Update () {

	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){
		window_change();
	}


	//始点位置を変更
	//cameras.transform.Rotate ( 0, ( Input.GetAxis ( "Horizontal" ) * 1 ), 0 );



	if(rote_flg == false){
		//Update関数は1秒毎に実行される
		timer += Time.deltaTime;	//daltaTime = 前フレームとの差分の秒数
		
		//n秒間実行
		if(timer < 4){
		   cameras.transform.Rotate ( 0, 1 , 0 );
	//		timer = 0;
		}else{
			rote_flg = true;
		}
	}
	Debug.Log(timer);

}




function window_change(){

	//ゲーム画面遷移
	Application.LoadLevel("game_end");

}


