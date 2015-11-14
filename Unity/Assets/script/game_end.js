//#pragma strict

//ゲーム終了画面オブジェクト取得用
var end_back:GameObject;

//選択された力士番号
select_No = PlayerPrefs.GetInt("select_No");

//前のシーンの変数の値（力士選択用など）
Debug.Log(select_No);


function Start () {
	
	//ゲーム終了画面オブジェクト取得
	end_back = GameObject.Find("end_back");
	
	//ゲーム終了画面非表示（Inspectorのオブジェクト名左のチェックをはずした状態）
	//SetActiveは該当要素のみ
	//SetActiveRecursivelyは階層も含めた要素
	end_back.SetActiveRecursively(false);

//	Debug.Log("game_end is move OK");

}

function Update () {

	//Enterキー押下
	if(Input.GetKeyDown(KeyCode.Return)){

		//ゲーム終了画面表示
		end_back.SetActiveRecursively(true);

	}

}

