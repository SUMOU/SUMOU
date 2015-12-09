#pragma strict
//オブジェクトそのものに結び付ける場合、
//this.transform～などの状態になるのでオブジェクトの取得は不要

function Start () {

}

var start = false;

function Update () {
	var anim:Animator = GetComponent("Animator");
	var harite = false;
	if(Input.GetButtonUp("Jump")){
		Debug.Log(anim.GetCurrentAnimatorStateInfo(0));
	}

	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kamae") && Input.GetButtonUp("Jump")){
		// 試合時間計測開始
		if(!start) Application.ExternalCall("startTimer");
		//アニメーション:startかつスペースを押したら始まる
		start = true;
		
		// スクショ
		// Application.CaptureScreenshot("screenshot.png");

	}
	else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu") && Input.GetButtonUp("Jump")){
		harite = true;
		if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
			//Base Layerのアニメーションsusumuを取得している			
			transform.position.x += 1;
		}

	}	
	
	
	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}

function harite(){
	var anim:Animator = GetComponent("Animator");
	var harite = false;
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kamae")){
		// 試合時間計測開始
		if(!start) Application.ExternalCall("startTimer");

		//アニメーション:startかつスペースを押したら始まる
		start = true;
		
		// スクショ
		// Application.CaptureScreenshot("screenshot.png");

	}
	else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
		harite = true;
		if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
			//Base Layerのアニメーションsusumuを取得している			
			transform.position.x += 1;
		}

	}
}