//#pragma strict

//最初の1回実行される関数
function Start () {
	
}

//表示されている間繰り返し実行される関数
function Update () {

	//■スマホがまわしにセットされたら
	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){
		window_change("char_select");
	}

	Debug.Log("title is move OK");

}


//画面遷移
function window_change(change_prev){

	Application.LoadLevel(change_prev);

}


