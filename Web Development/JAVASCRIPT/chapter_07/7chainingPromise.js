// Loadscript using promises

const Loadscript=((src)=>
{
    return new Promise((resolve,reject)=>
    {
        let script = document.createElement("script");
        script.type = "text/javascript";
        script.src=src;
        document.body.appendChild(script);
        script.onload=()=>
        {
            resolve(src);     //returning when the promise is fullfilled 
                            // i.e when script is loaded
        };
        // when error
        script.onerror=()=>{
            reject (null);     // returns when promise is not fullfilled
        };
    });
});

let p = Loadscript("https://www.google.com");
p.then((value)=>
{
    console.log("Script loaded "+value);
    return Loadscript("https://www.facebook.com");
}).then((value)=>
{
    console.log("Second Script is Ready " +value);
}).catch((error)=>{
    console.log("'"+error+"' we caught an error");
});