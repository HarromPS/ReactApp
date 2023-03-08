// const prompt=require('prompt-sync')();

// WAP of Q1 using async/await
const fun = async (url) => {
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
/*
GET http://127.0.0.1:5500/chapter_07/a.js net::ERR_ABORTED 404 (Not Found) => local server
*/
const funct = async () => {
    let a = await fun("sample.js");
    console.log(a);
    // a.then((value) => {
    //     alert("Load is complete "+ value)
    // });
        alert("Load is complete ");

}

funct();