//#pragma strict

//ゲーム終了画面オブジェクト
var end:GameObject;
var bar:GameObject;


//選択された力士番号取得
//rikishi_No = PlayerPrefs.GetInt("select_No");


//文字色変更用
var materials:Material[];
var select_No : int=0;

//勝ち負け true=勝ち
var result : boolean=false;
var end_flg : boolean=false;

function Start () {
	
	end = GameObject.Find("end");
	bar = GameObject.Find("bar");
	
	//ゲーム終了画面非表示（Inspectorのオブジェクト名左のチェックをはずした状態）
	//SetActiveは該当要素のみ
	//SetActiveRecursivelyは階層も含めた要素
	end.SetActiveRecursively(false);
	
	Debug.Log("game_end is move OK");

}

function Update () {

	//ゲーム終了判定
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


//カーソル移動
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
		Application.LoadLevel("banduke");
	}
	else if(select_No == 1){
		Application.LoadLevel("char_select");
	}
	else if(select_No == 2){
		Application.LoadLevel("title");
	}

}

