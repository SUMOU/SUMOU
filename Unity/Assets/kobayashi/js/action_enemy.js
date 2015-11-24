#pragma strict

function Start () {

}

var start = false;//はっけよい→のこった

function Update () {
	var anim:Animator = GetComponent("Animator");
	var harite = false;//攻撃のループ用
	
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.start") && Input.GetButtonUp("Jump")){
		//アニメーション:startかつスペースを押したら始まる
		start = true;
	}
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
		//アニメーション:susumuのときxが+される
		transform.position.x+= 1;
	}
 
	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}



function OnCollisionEnter(obj:Collision){

	if(obj.gameObject.name == "Player"){
		Debug.Log("プレイヤーに当たった！");
	}

	// var anim:Animator = GetComponent("Animator");
	// if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.harite")){

	// }
	
}