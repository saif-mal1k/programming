/*
var a = 100
console.log("inside global scope:\n a =",a);
{
	console.log("inside block scope");
	var a = 1;
	console.log("\n\tsince, a = 1 is nearer it will shadow outer a = 100. hence,\n\t a=",a);
	console.log("\n\tas var is not block scoped \n\t hence modifying a will change the outer a = 100 as both a have same reference\n\n");	

}
console.log("outside block\n a=",a);
*/


var a=10;

function aprint() { 
	var a=20;
	console.log("inner a:",a);
};

aprint();
console.log("outer a:",a);
