$(function() {
		//Set up jquery UI elements
		$( ".injuryList" ).accordion({ active: 99, heightStyle: "content" });
		//Hide elements
		$("#formWrapper, #head, #hand, #arm, #foot, #lowerBody, #upperBody, #endForm,#manarm,#manfoot,#manhand,#manhead,#manlowerBody,#manupperBody,#rightBody a").hide();
		
	
//Show hide Body parts
$( "#rightBody a" )
  .mouseenter(function() {
	  var myClass = $(this).attr("class");
    $("#manback #man" + myClass).fadeIn();
	
  })
  .mouseleave(function() {
	  var myClass = $(this).attr("class");
    $("#manback #man" + myClass).fadeOut();
	
  })
  .click(function() {
	  var myClass = $(this).attr("class");
    $("#manback #man" + myClass).show();
	$("#formWrapper").fadeIn("slow");
	$("#formWrapper #" + myClass).fadeIn();
	$("#instText,#rightBody a").hide();
	
  });
  
 
		
		
		//Button clicks and set form
		$( ".InjuryType" ).click(function(){
		  //Set text of form field with name of button
			var text = $( this ).text();
 		 	$( "#InjuryField" ).val( text );
		//Set Claim amount from Button Value	
			 var domElement = $( this ).get( 0 );
			 $(".saveText").text(domElement.value );
		//Show form	 
			$("#formLists").fadeOut(function(){
				$("#endForm").fadeIn("slow");
				});
			
		}); 
		//Pop up
		$( "#instText a" ).click(function(){
		  $("#rightBody a").slideDown("slow","swing");
		  $("#instText").fadeOut("slow");
			
		}); 
		//Reset button
		$( ".reset" ).click(function() {
         location.reload(true);
		});
		
		});