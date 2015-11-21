#pragma strict

function Start () {

}

function Update () {
	var anim:Animator = GetComponent("Animator");
	var start = false;
	var harite = false;
	var atack = false;//攻撃フラグ
	
	if(Input.GetKeyDown(KeyCode.Space)){
		start = true;
		harite = true;
	}

	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}