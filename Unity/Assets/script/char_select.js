//#pragma strict


//キャラクタ
//var char0;


//マテリアル使用の宣言
var materials:Material[];

//選択されているキャラクタ
var select_char;

//選択されているキャラクタ番号(0～5)
var select_No=0;


//最初の1回実行される関数
function Start () {

	//キャラクタ取得
	//select_char = GameObject.Find("char0");
	
	Debug.Log("OK MOVE");

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
	
}

//カーソル移動
function select_moves(direction){

	//カーソル移動前のマテリアル（選択キャラの色）変更
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

}

 


