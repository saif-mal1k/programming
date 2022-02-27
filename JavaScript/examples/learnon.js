function quad()
{
    var a = document.getElementById("av").Value;
    var b = document.getElementById("bv").Value;
    var c = document.getElementById("cv").Value; 
    var d = (math.pow(b, 2) - (4 * a * c)); 
    var x1 = ((-b) + math.sqrt(d)) / (2 * a); 
    var x2 = ((-b) - math.sqrt(d)) / (2 * a);
    document.getElementById("r1").value = x1;
    document.getElementById("r2").value = x2;
    if(document.getElementById("r1").value == "NaN")
        document.getElementById("r1").value="imag";
    if(document.getElementById("r2").value == "NaN")
        document.getElementById("r2").value = "imag";
}
var check=true;
function isNumberKey(id) 
{
    var no=eval(""+id+"");
    var number = document.getElementById(no).value; 
    if (number.length == 1) 
    {
        check = true; 
    }
    if (number.length > 1) 
    {
        var dd = number; 
        if (dd.substring(dd.length, (dd.length - 1)) == '-')
            {
                if(check)
                {
                    check=false;
                }
                else
                {
                    dd = dd.substring(0, (dd.length - 1)); 
                    document.getElementById(no).value = dd; 
                }
            }
    }
    if (!number.match(/[0-9-]+$/) && number != "")  
    {
        document.getElementById(id).value = ""; 
        document.getElementById(id).focus(); 
    }
    else
    {
        var dd = number; 
        if (dd.substring(dd.length, (dd.length - 1)) == '-') 
        {
            if(check)
            {
                check=false;
            }
            else
            {
                document.getElementById(id).value = ""; 
                document.getElementById(id).focus(); 
            }
        }
    }
}