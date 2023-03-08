// Callback Hell Or Pyramid of DOOM
// callback inside callback


// CallBack function=> outer function passed as an argument to a 
// function & it calls the outer function to complete an action.
function loadScript(src, callback) {
    // src & onload are the attributes of script tag 
    let script = document.createElement("script");
    script.src = src;
    let b;
    b = script.onload;    // checks if the script is loaded


    if (b == script.onload) {
        console.log("Script is Loaded");
    }
    else {
        console.log("script is not loaded");
    }
    // Will run after the .onload attribute in HTML gets executes
    script.onload = function () {
        console.log("Loaded Script " + src);

        // passing arguments to the callback functions
        // when script loaded no error
        callback(false, script);
    }

    // When ERROR
    // when the script is not loaded
    script.onerror = function () {
        console.log("Error loading the SRC " + src);
        callback(new Error("src not found"), src);

    }
    document.body.appendChild(script);
}

function hello(error, src) {
    if (error == null) {
        console.log("This is a argument from the callback function\n" + src);
        return;

    }
    else {
        console.log("Hello World " + src);
    }

}

function HELLO(error, src) {
    if (error) {
        console.log(error);
        sendEmergencyMessageToCeo();
        /*
        at script.onerror (5CallbackHell_pyramidOfDoom.js:37:18)
        */
        return;

    }
    else {
        console.log("Hello World " + src);
    }

}

function newNew(hello, src) {
    console.log("new");
    alert("newNew");
    hello(src);
}

// Handling Errors 
// occurs when URL provided does not exists
// Pyramid of Doom ->function grows diagonally
loadScript("https://www.google.com", function HELLO(error, src) {
    if (error) {
        console.log(error);
        sendEmergencyMessageToCeo();
        /*
        at script.onerror (5CallbackHell_pyramidOfDoom.js:37:18)
        */
        return;

    }
    else {
        function HELLO(error, src) {
            if (error) {
                console.log(error);
                sendEmergencyMessageToCeo();
                /*
                at script.onerror (5CallbackHell_pyramidOfDoom.js:37:18)
                */
                return;

            }
            else {
                function HELLO(error, src) {
                    if (error) {
                        console.log(error);
                        sendEmergencyMessageToCeo();
                        /*
                        at script.onerror (5CallbackHell_pyramidOfDoom.js:37:18)
                        */
                        return;

                    }
                    else {
                        function HELLO(error, src) {
                            if (error) {
                                console.log(error);
                                sendEmergencyMessageToCeo();
                                /*
                                at script.onerror (5CallbackHell_pyramidOfDoom.js:37:18)
                                */
                                return;

                            }
                            else {
                                function HELLO(error, src) {
                                    if (error) {
                                        console.log(error);
                                        sendEmergencyMessageToCeo();
                                        /*
                                        at script.onerror (5CallbackHell_pyramidOfDoom.js:37:18)
                                        */
                                        return;
                                
                                    }
                                    else {
                                        console.log("Hello World " + src);
                                    }
                                
                                }
                            }

                        }
                    }

                }
            }

        }
    }

})