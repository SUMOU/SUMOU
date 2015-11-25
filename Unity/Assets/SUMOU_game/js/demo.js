#pragma strict

private var MainCam : Camera;//メインカメラ
private var FirstCam : Camera;//一人称視点カメラ
private var MainAudioListener : AudioListener;//よくわからんけど必要みたい？ ないと警告が出る
private var FirstAudioListener : AudioListener;


//力士名設定
var names = new Array ();
names[0]="白\n鵬";
names[1]="朝\n青\n龍";
names[2]="大\n鵬";
names[3]="千\n代\nの\n富\n士";
names[4]="北\nの\n湖";
names[5]="貴\n乃\n花";

var rikishi_No : int=0;

//力士名変更用
var user_name:GameObject;
var name_tm:TextMesh;


//ゲーム終了画面オブジェクト
var end:GameObject;
var bar:GameObject;

//ゲーム終了画面文字色変更用
var materials:Material[];
var select_No : int=0;

//勝ち負け true=勝ち
var result : boolean=false;
var end_flg : boolean=false;




function Start () {

	//ゲーム終了画面取得
	end = GameObject.Find("end");
	bar = GameObject.Find("bar");

	//ゲーム終了画面非表示（Inspectorのオブジェクト名左のチェックをはずした状態）
	//SetActiveは該当要素のみ
	//SetActiveRecursivelyは階層も含めた要素
	end.SetActiveRecursively(false);




	MainCam = GameObject.Find("Main Camera").GetComponent.<Camera>();
	FirstCam = GameObject.Find("Camera_FirstPerson").GetComponent.<Camera>();
	MainAudioListener = GameObject.Find("Main Camera").GetComponent.<AudioListener>();
	FirstAudioListener = GameObject.Find("Camera_FirstPerson").GetComponent.<AudioListener>();
	
	//初期ではメインカメラを有効にする
	//変数名.enabled　で描画するか否かを指定できる
	MainCam.enabled = true;
	MainAudioListener.enabled = true;
	FirstCam.enabled = false;
	FirstAudioListener.enabled = false;
	
	
	
	
	//選択された力士番号
	if(PlayerPrefs.GetInt("select_No")){
		var rikishi_No = PlayerPrefs.GetInt("select_No");
	}

	//力士名と詳細情報表示
	user_name = GameObject.Find("user_name");
	name_tm = user_name.GetComponent("TextMesh");
	name_tm.text = names[rikishi_No];
	

	
	
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
		//ゲーム終了画面表示
		end.SetActiveRecursively(true);
		result = true;
		end_flg = true;
	}
	//右クリック　負け
	if(Input.GetMouseButtonDown(1) && end_flg == false){
		end.SetActiveRecursively(true);
		GameObject.Find("after0").GetComponent.<MeshRenderer>().material = materials[7];
		end_flg = true;
	}


	if(end_flg){
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
			window_change();
		}
	}
	
	
}

function CamChange(){
	MainCam.enabled = false;
	MainAudioListener.enabled = false;
	FirstCam.enabled = true;
	FirstAudioListener.enabled = true;
}






/****************
* カーソル移動
****************/
function select_moves(direction){
	
	/************************
	* カーソル変更前色変更
	************************/
	//勝敗で表示文字を変更
	if(result){
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
			bar.transform.Translate(0,-4,0);
		}else{
			select_No--;
			bar.transform.Translate(0,2,0);
		}
	}
	//下に移動
	else if(direction == "down"){
		//1番下にいた
		if(select_No == 2){
			select_No = 0;
			bar.transform.Translate(0,4,0);
		}else{
			select_No++;
			bar.transform.Translate(0,-2,0);
		}
	}


	/************************
	* カーソル変更後色変更
	************************/
	if(result){
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

	Debug.Log(select_No);
}


//■張り手
//画面遷移
function window_change(){

	//画面遷移
	if(select_No == 0){
		Application.LoadLevel("demo");
	}
	else if(select_No == 1){
		Application.LoadLevel("char_select");
	}
	else if(select_No == 2){
		Application.LoadLevel("title");
	}

}



