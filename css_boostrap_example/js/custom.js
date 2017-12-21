// JavaScript Document
	var check_email = 0;
	var check_passwd = 0;
	var is_enabled = 0;
	
	function input () {
		check_email = document.getElementById("email").value;
		check_passwd = document.getElementById("password").value;
		is_disabled = document.getElementById("change").disabled;
		
		if (check_email != "" && check_passwd != "" && is_disabled == true) 
			document.getElementById("change").disabled = false;
		else if (check_email == "" || check_passwd == "" && is_disabled == false)
			document.getElementById("change").disabled = true;
	}
	
	function mouse_over_fb() {
		document.getElementById("fb").src = "images/sm/facebook.jpg"
	}
	function mouse_out_fb() {
		document.getElementById("fb").src = "images/sm/facebook-gay.jpg"
	}
	
	function mouse_over_yt() {
		document.getElementById("yt").src = "images/sm/youtube.jpg"
	}
	function mouse_out_yt() {
		document.getElementById("yt").src = "images/sm/youtube-gay.jpg"
	}
	
	function mouse_over_sc() {
		document.getElementById("sc").src = "images/sm/snapchat.jpg"
	}
	function mouse_out_sc() {
		document.getElementById("sc").src = "images/sm/snapchat-gay.jpg"
	}
	
	function mouse_over_ig() {
		document.getElementById("ig").src = "images/sm/instagram.jpg"
	}
	function mouse_out_ig() {
		document.getElementById("ig").src = "images/sm/instagram-gay.jpg"
	}
	
	function mouse_over_tt() {
		document.getElementById("tt").src = "images/sm/twitter.jpg"
	}
	function mouse_out_tt() {
		document.getElementById("tt").src = "images/sm/twitter-gay.jpg"
	}
	
	var modal = document.getElementById('myModal');
	
	// Get the image and insert it inside the modal - use its "alt" text as a caption
	var img1 = document.getElementById('myImg1');
	var img2 = document.getElementById('myImg2');
	var img3 = document.getElementById('myImg3');
	var img4 = document.getElementById('myImg4');
	var img5 = document.getElementById('myImg5');
	var img6 = document.getElementById('myImg6');
	var img7 = document.getElementById('myImg7');
	var img8 = document.getElementById('myImg8');
	var img9 = document.getElementById('myImg9');
	var img10 = document.getElementById('myImg10');
	var img11 = document.getElementById('myImg11');
	var img12 = document.getElementById('myImg12');
	
	var modalImg = document.getElementById("img01");
	var captionText = document.getElementById("caption")
		
	img1.onclick = function(){				
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg1").src;
		captionText.innerHTML = this.alt;
	}
	img2.onclick = function(){			
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg2").src;
		captionText.innerHTML = this.alt;
	}
	
	img3.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg3").src;
		captionText.innerHTML = this.alt;
	}
	
	img4.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg4").src;
		captionText.innerHTML = this.alt;
	}
	
	img5.onclick = function(){	
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg5").src;
		captionText.innerHTML = this.alt;
	}
	
	img6.onclick = function(){	
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg6").src;
		captionText.innerHTML = this.alt;
	}
	
	img7.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg7").src;
		captionText.innerHTML = this.alt;
	}
	
	img8.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg8").src;
		captionText.innerHTML = this.alt;
	}
	
	img9.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg9").src;
		captionText.innerHTML = this.alt;
	}
	
	img10.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg10").src;
		captionText.innerHTML = this.alt;
	}
	
	img11.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg11").src;
		captionText.innerHTML = this.alt;
	}
	
	img12.onclick = function(){		
		modal.style.display = "block";
		modalImg.src = document.getElementById("myImg12").src;
		captionText.innerHTML = this.alt;
	}
	// Get the <span> element that closes the modal
	var span = document.getElementsByClassName("close")[0];
	
	// When the user clicks on <span> (x), close the modal
	span.onclick = function() { 
	  modal.style.display = "none";
	}	