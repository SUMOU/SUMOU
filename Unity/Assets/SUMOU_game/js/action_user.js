#pragma strict

//フラグ管理
static var start:boolean;
var harite:boolean;

//張り手オブジェクトを取得
// var harite_r:GameObject;
// var harite_l:GameObject;

// オブジェクト取得
var user:GameObject;
var Sound_box1:GameObject;
var Sound_box2:GameObject;
var hakkeyoi:GameObject;
var nokotta:GameObject;

// 効果音
var source1:AudioSource;
var source2:AudioSource;
var SE1 : AudioClip;
var SE2 : AudioClip;

// 音声用
var hakkeyoi_flg:boolean = true;
var nokotta_flg:boolean = true;

// アニメーター
var anim:Animator;



//勝敗決定判定フラグ
var WL_flg:boolean = false;



function Start () {
	start = false;
}

function Update () {
	
	//hariteのboxcollider取得
	// var collider_r = harite_r.GetComponent.<BoxCollider>();
	// var collider_l = harite_l.GetComponent.<BoxCollider>();

	//sound
	source1 = Sound_box1.gameObject.GetComponent(AudioSource);
	source2 = Sound_box2.gameObject.GetComponent(AudioSource);

	anim = GetComponent("Animator");
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kamae") && Input.GetButtonUp("Jump")){
		//アニメーション:startかつスペースを押したら始まる
		start = true;
	}

	// if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.start")){
	// 	//アニメーション:startかつ三秒後に始まる
	// 	Invoke("start_flg",3);
	// }

	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu") && Input.GetButtonUp("Jump")){
		//Base Layerのアニメーションsusumuを取得している
		harite = true;
		// susumuが呼ばれると前に進む
		var force = 40;//移動する力
		var collision = transform.parent.gameObject;

		Debug.Log(collision);

		collision.GetComponent.<Rigidbody>().AddForce(Vector3.right*force);
	}
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.harite")){
		harite = false;//hariteが終われば元に戻す
	}
	//「はっけよい」音制御
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kamae") && hakkeyoi_flg == true){
		source1.PlayOneShot(SE1);
		Debug.Log("はっけよい");
		hakkeyoi_flg = false;
	}
	//「のこった」音制御
	if(start == true && nokotta_flg == true){
		source2.PlayOneShot(SE2);
		Debug.Log("のこった");
		nokotta_flg = false;
		Invoke("flg",3.5);
	}

	if(start == true){
		Destroy(hakkeyoi);
		Destroy(nokotta,3);
	}

	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
	
	
	
	//勝敗決定後音の削除
	if(WL_flg == false){
		if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.yorokobi")){
			WL_flg = true;
			source2.volume = 0;
		}
		else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kuyasi")){
			WL_flg = true;
			source2.volume = 0;
		}
	}
	
	
}

function flg(){
	nokotta_flg = !nokotta_flg;
}

// function start_flg(){
// 	start = true;
// }

function harite(){
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kamae")){
		//アニメーション:startかつ張り手押したら始まる
		start = true;
		// 試合時間計測開始
		if(!start) Application.ExternalCall("startTimer");
		Debug.Log('張り手！@ゲーム');
	}
	else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
		//Base Layerのアニメーションsusumuを取得している
		harite = true;
		// susumuが呼ばれると前に進む
		var force = 40;//移動する力
		var collision = transform.parent.gameObject;

		Debug.Log(collision);

		collision.GetComponent.<Rigidbody>().AddForce(Vector3.right*force);
	}
}