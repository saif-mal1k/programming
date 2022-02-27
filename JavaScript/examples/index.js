
var greet = "hellow ";

document.write("hellow");

//if (document.getElementById("name").value == 'saif'){ 
    //var name = document.getElementById("name").value;
   // var age = prompt("tell me your age?");
//}

//var msg = greet+", are really "+age+"yrs old?";

//console.log(msg);

//alert(msg)

var name = document.getElementById('name');
document.write(name);









function multiply(num1, num2) {
    let result = num1 * num2;
    return result;
}


<body>
    <p id="demo">JavaScript can change the style of an HTML element.</p>
    <button type="button" onclick="document.getElementById('demo').style.fontSize='35px'">Click Me!</button>
    <p id="demoo">JavaScript Can Hide HTML Elements</p>
    <button type="button" onclick='document.getElementById(" demoo").style.display = "none";'>Click Me!</button>
    <p>JavaScript can show hidden HTML elements.</p>
    <p id="deemo" style="display:none">Hello JavaScript!</p>
    <button type="button" onclick="document.getElementById('deemo').style.display='block'">Click Me!</button>
</body >
