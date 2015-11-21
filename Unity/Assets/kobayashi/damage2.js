#pragma strict
function OnGUI(){

	if ( GUI.Button( Rect(100, 100, 100, 40), "ぼたん" ) ){
/*
		transform.localScale += new Vector3(-0.05,0,0);//HPのバーが右側から縮む

		if (transform.localScale.x <= 0) {
			transform.localScale.x = 0;	
		}
*/
		transform.localScale.x -=0.1;
		transform.position.x -=0.0;
	}
}

function Start () {

	// var pivot : transform = transform.Find("SelectorPivot");
	// this.transform.RotateAround

}

function Update () {

}