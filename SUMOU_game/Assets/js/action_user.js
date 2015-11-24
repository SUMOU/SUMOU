#pragma strict
//オブジェクトそのものに結び付ける場合、
//this.transform～などの状態になるのでオブジェクトの取得は不要
function Start () {

}

function Update () {
	var anim:Animator = GetComponent("Animator");
	var start = false;
	var harite = false;
	var atack = false;//攻撃フラグ
	
	if(Input.GetKeyDown(KeyCode.Space)){//スペースキーで試合開始
		start = true;
		harite = true;
		if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
			//Base Layerのアニメーションsusumuを取得している
			transform.position.z += 1;
		}
	}
	


	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}