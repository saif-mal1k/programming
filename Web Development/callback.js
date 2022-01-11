var fname = function (){
	console.log("hellow, your name?");
	var name = prompt("enter name:");
	return name;
}


function printName( callbackfunction){
	var NAME = callbackfunction();
	console.log("your name:",name);
}


printName(fname);


