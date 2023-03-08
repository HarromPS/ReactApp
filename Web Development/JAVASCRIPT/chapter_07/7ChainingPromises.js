// const prompt=require('prompt-sync')();
// Promises Chaining
// used like callback function-> idea behind is that the result is passed through 
// chain of .then() handlers

let p = new Promise((resolve,reject)=>
{
    setTimeout(()=>{
        console.log("Promise resolved after 3 seconds");
        resolve(34);
    },3000);
});

p.then((value)=>{
    console.log(value);
   return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            // console.log("Promise2");
            resolve("Promise2");
        },2000);
    })
}).then((value)=>{
    console.log("Resolved "+value);
});

