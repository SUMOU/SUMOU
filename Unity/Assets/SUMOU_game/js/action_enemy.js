#pragma strict

function Start () {
}

// フラグ管理
var start = false;
var harite:boolean;

//張り手オブジェクトを取得
// 
// var harite_r:GameObject;
// var harite_l:GameObject;
function Update () {

	//hariteのboxcollider取得
	// var collider_r = harite_r.GetComponent.<BoxCollider>();
	// var collider_l = harite_l.GetComponent.<BoxCollider>();

	// アニメーター操作
	var anim:Animator = GetComponent("Animator");

	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.kamae") && Input.GetButtonUp("Jump")){
		//アニメーション:startかつスペースを押したら始まる
		start = true;
	}
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.susumu")){
		//アニメーション:susumuのときxが+される
		harite = true;
		//susumuが呼ばれると前に進む
		var force = 10;//移動する力
		var collision = transform.parent.gameObject;
		collision.GetComponent.<Rigidbody>().AddForce(Vector3.left*force);
	}
	if(anim.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.harite")){
		harite = false;//hariteが終れば元に戻す
	}

	anim.SetBool("start",start);
	anim.SetBool("harite",harite);
}

