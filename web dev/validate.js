/*
    //Browser Support Code
            function ajaxFunction() {
                var ajaxRequest;  // The variable that makes Ajax possible!

                try {
        // Opera 8.0+, Firefox, Safari 
        ajaxRequest = new XMLHttpRequest();
                } catch (e) {

                    // Internet Explorer Browsers
                    try {
        ajaxRequest = new ActiveXObject("Msxml2.XMLHTTP");
                    } catch (e) {

                        try {
        ajaxRequest = new ActiveXObject("Microsoft.XMLHTTP");
                        } catch (e) {

        // Something went wrong
        alert("Your browser broke!");
                            return false;
                        }
                    }
                }
            }
*/


function validateUserId() {
    ajaxFunction();

    // Here processRequest() is the callback function.
    ajaxRequest.onreadystatechange = processRequest;

    if (!target) target = document.getElementById("userid");
    var url = "validate?id=" + escape(target.value);

    ajaxRequest.open("GET", url, true);
    ajaxRequest.send(null);
}
search web technology jsp, servlet, ajax full course