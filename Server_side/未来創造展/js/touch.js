<<<<<<< HEAD
$(document).ready(function(){

	var num1 = 0;
	var num3 = 0;
	var num2 = 0;

	function pg(){
		if(num1 ==1 && num2 ==1 && num3 ==1){
			document.location = "http://hal.ovdesign.jp/md31/kotani/touch/test.html";
		}
	}
	$('#box1').on("click", function(){
		num1 = 1;
		pg();
    	//alert(num1+" "+num2+" "+num3);
	});

	$('#box2').on("click", function(){
		num2 = 1;
		pg();
	});

	$('#box3').on("click", function(){
    	num3 = 1;
    	pg();
	});

setInterval(function(){
    $('#main').fadeOut(200,function(){
        	$(this).fadeIn(200)});
    },800);

/*
	$('#box1').on("touchend", function(){
		num1 = 0;
	});

	$('#box2').on("touchend", function(){
		num2 = 0;
	});

	$('#box3').on("touchend", function(){
		num3 = 0;
	});
*/

=======
$(document).ready(function(){

	var num1 = 0;
	var num3 = 0;
	var num2 = 0;

	function pg(){
		if(num1 ==1 && num2 ==1 && num3 ==1){
			document.location = "http://hal.ovdesign.jp/md31/kotani/touch/test.html";
		}
	}
	$('#box1').on("click", function(){
		num1 = 1;
		pg();
    	//alert(num1+" "+num2+" "+num3);
	});

	$('#box2').on("click", function(){
		num2 = 1;
		pg();
	});

	$('#box3').on("click", function(){
    	num3 = 1;
    	pg();
	});

setInterval(function(){
    $('#main').fadeOut(200,function(){
        	$(this).fadeIn(200)});
    },800);

/*
	$('#box1').on("touchend", function(){
		num1 = 0;
	});

	$('#box2').on("touchend", function(){
		num2 = 0;
	});

	$('#box3').on("touchend", function(){
		num3 = 0;
	});
*/

>>>>>>> 0af71211fe254cc43d984da4c300c78a1426f74f
});