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
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
		transform.position.z += 1;
	}
 
	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}