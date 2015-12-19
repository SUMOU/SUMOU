#pragma strict
//効果音
var source : AudioSource;
var SE : AudioClip;

// オブジェクト取得
var enemy:GameObject;// enemy(親要素)を取得

function Start () {

}

function Update () {
	
}

function OnTriggerEnter(collider:Collider){
	// 張り手力
	var force = 10;

	//効果音取得
	source = this.gameObject.GetComponent(AudioSource);

	// 張り手の当たり判定(手の判定が身体に触れれば相手が後ろへ吹っ飛ぶ)
	var name = collider.gameObject.name;

	if(name == "CollisionPoint_user"){
		//効果音再生
		source.PlayOneShot(SE);
		
		// 相手が吹っ飛ぶ
		collider.gameObject.GetComponent.<Rigidbody>().AddForce(Vector3.left * force,ForceMode.Impulse);
		Debug.Log(name + "にHit!");
	}
	
}