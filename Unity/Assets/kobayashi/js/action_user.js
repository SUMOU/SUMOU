#pragma strict
//オブジェクトそのものに結び付ける場合、
//this.transform～などの状態になるのでオブジェクトの取得は不要

function Start () {

}

var start = false;

function Update () {
	var anim:Animator = GetComponent("Animator");
	var harite = false;
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.start") && Input.GetButtonUp("Jump")){
		//アニメーション:startかつスペースを押したら始まる
		start = true;
	}
	else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu") && Input.GetButtonUp("Jump")){
		harite = true;
		if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
			//Base Layerのアニメーションsusumuを取得している			
			transform.position.x -= 1;
		}

	}	
	
	
	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}