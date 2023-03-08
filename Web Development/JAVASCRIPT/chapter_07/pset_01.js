// WAP to load a url a JS file in a browser using Promises. 
// use .then() to display an alert when the load is complete
// T&pcell22-23@newteam
const fun = (url) => {
    let n = new Promise((resolve, reject) => {
        let script = document.createElement("script");
        script.src = url;
        script.onload = () => {
            resolve(script);
        }
        document.head.appendChild(script);
    });
    return n;

}
let x=fun("11errorObj.js");
x.then((value)=>{
    alert("Script is loaded "+value);
})
