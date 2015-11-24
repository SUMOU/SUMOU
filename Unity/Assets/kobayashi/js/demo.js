#pragma strict

private var MainCam : Camera;//メインカメラ
private var FirstCam : Camera;//一人称視点カメラ
private var MainAudioListener : AudioListener;//よくわからんけど必要みたい？ ないと警告が出る
private var FirstAudioListener : AudioListener;

function Start () {
	MainCam = GameObject.Find("Main Camera").GetComponent.<Camera>();
	FirstCam = GameObject.Find("Camera_FirstPerson").GetComponent.<Camera>();
	MainAudioListener = GameObject.Find("Main Camera").GetComponent.<AudioListener>();
	FirstAudioListener = GameObject.Find("Camera_FirstPerson").GetComponent.<AudioListener>();
	
	//初期ではメインカメラを有効にする
	//変数名.enabled　で描画するか否かを指定できる
	MainCam.enabled = true;
	MainAudioListener.enabled = true;
	FirstCam.enabled = false;
	FirstAudioListener.enabled = false;
}

function Update () {

	if(transform.position.z <= 7){
		transform.position.z += 1;
		// transform.position.z = 7; //期待値z軸25
	}//徐々に名前が近づいてくる。

	//アニメーション終了時にhakuho・asashoryuが削除される
	var asashoryu = gameObject.Find("asashoryu");
	var hakuho = gameObject.Find("hakuho");
	Destroy(asashoryu,10);
	Destroy(hakuho,10);

	// アニメーション終了と同時にカメラが切り替わる
	// Invoke("CamChange",11);
}

function CamChange(){
	MainCam.enabled = false;
	MainAudioListener.enabled = false;
	FirstCam.enabled = true;
	FirstAudioListener.enabled = true;
}