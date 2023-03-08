// const prompt=require('prompt-sync')();
/*
fetch API-> used to receive or send info from OR to the server
*/
// let promise=fetch("https://thispersondoesnotexist.com/");

// Syntax:
let promise = fetch("https://www.reddit.com/r/javascript/top/.json?limit=5");
// let promise = fetch("https://jsonplaceholder.typicode.com/todos/1");

promise.then((response1) =>
{   
    // first promise resolved
    console.log(response1.status);
    console.log(response1.ok);

    console.log(response1.json);
    console.log(response1.arrayBuffer);
    console.log(response1.formData);
    console.log(response1.blob);
    console.log(response1.text);

    return response1.json();
}).then((response2) => 
{
    // second promise resolved
    console.log(response2);
});

let res=fetch("https://jsonplaceholder.typicode.com/todos/1",{headers:{
    Authentication: 'secret'
}});
res.then((response)=>{
    console.log(response.headers);
    return response.json;
}).then((response)=>{
    console.log(response);
})


// let p2=new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         resolve(2);
//     })
// })
// let p1= new Promise((resolve,reject)=>{
//     setTimeout(()=>{
//         resolve(1);
        
//     });
// });

// p1.then((value)=>{
//     console.log(value);
//     return value;
// }).then((value)=>{
//     console.log(value);
// })