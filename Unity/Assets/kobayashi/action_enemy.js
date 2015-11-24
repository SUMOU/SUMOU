#pragma strict

function Start () {

}

function Update () {
	var anim:Animator = GetComponent("Animator");
	var start = false;//はっけよい→のこった
	var harite = false;//攻撃のループ用

	
	if(Input.GetButtonUp("Jump")){//スペースを押したら始まる
		start = true;
	}

	// var name = GameObject.Find("hp");
	// // if(Input.GetKeyDown (KeyCode.Space)){
 
	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}