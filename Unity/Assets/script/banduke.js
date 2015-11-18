//#pragma strict

//キャラ名
var names = new Array ();
names[0]="力\n士\n1";
names[1]="力\n士\n2";
names[2]="力\n士\n3";
names[3]="力\n士\n4";
names[4]="力\n士\n5";
names[5]="力\n士\n6";

var rikishi_No = 0;

var rikishi_name:GameObject;
var name_tm:TextMesh;

function Start () {

	//選択された力士番号
	if(PlayerPrefs.GetInt("select_No")){
		var rikishi_No = PlayerPrefs.GetInt("select_No");
	}

	//力士名と詳細情報表示
	rikishi_name = GameObject.Find("name1");
	name_tm = rikishi_name.GetComponent("TextMesh");
	name_tm.text = names[rikishi_No];
	
	Debug.Log("banduke move OK");
	
}

function Update () {

	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){
		window_change();
	}

}


function window_change(){

	//ゲーム画面遷移
	Application.LoadLevel("game_end");

}


