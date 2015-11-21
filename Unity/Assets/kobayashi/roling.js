#pragma strict


function Start () {

}

function Update () {
	transform.Rotate(0,2.5,0);//回転

	if(Input.GetKeyDown(KeyCode.UpArrow)){
		//上キーを押した
	}

	// if(Input.GetKey(KeyCode.UpArrow){
	// 	//上キーを押し続けている
	// }
	// if(Input.GetKeyUp(KeyCode.UpArrow)){
	// 	//上キーを離した
	// }
}