// const prompt=require('prompt-sync')();
// console.log("Callbacked");


// CallBack function=> outer function passed as an argument to a 
// function & it calls the outer function to complete an action.
function loadScript(src,callback)
{
    // src & onload are the attributes of script tag 
    let script = document.createElement("script");
    script.src=src;
    let b;   
    b=script.onload;    // checks if the script is loaded
    

    if(b==script.onload){
        console.log("Script is Loaded");
    }
    else{
        console.log("script is not loaded");
    }
    // Will run after the .onload attribute in HTML gets executes
    script.onload=function(){
        console.log("Loaded Script "+src);

        // passing arguments to the callback functions
        callback(null,script);
    }

    // When ERROR
    // when the script is not loaded
    script.onerror=function()
    {
        console.log("Error loading the SRC "+src);
        callback(new Error("src not found"));
        
    }
    document.body.appendChild(script);   
}

function hello(error,src){
    if(error==null)
    {
        console.log("This is a argument from the callback function\n"+src);
        return;

    }
    else{
        console.log("Hello World "+src);
    }

}

function newNew(hello,src){
    console.log("new");
    alert("newNew");
    hello(src);
}

newNew(hello,"https://www.google.com");
// loadScript(src,callback);
// loadScript("https://www.google.com",hello);
// loadScript("4CallBacks.js",hello);

// Handling Errors 
// occurs when URL provided does not exists
loadScript("https://www.googla.com",hello);