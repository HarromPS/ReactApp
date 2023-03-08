const prompt = require('prompt-sync')();
// Call Backs in JavaScript

// Asynchronous programming/actions
// => the actions which initiated now & ends later e.g:
setTimeout(function () 
{ 
    // As it is an Asynchronous function it will be scheduled to run after execution of the next steps
    console.log("Ends After 3 seconds \nHello")
}, 3000);
console.log("Start");
setTimeout(function () 
{ 
    // As it is an Asynchronous function it will be scheduled to run after execution of the next steps
    console.log("Ends After 3 seconds \nHello")
}, 3000);

// Synchronous action
// => the actions which initiated now & ends one-by-one e.g:
let a = prompt("Enter your name: ");
// let a1 = prompt("Enter your age: ");
// let a2 = prompt("Enter your favourite colour: ");
// console.log(a + " is your name, " + a1 + " is your age\n" + a2 + " is your favourite colour ");

setTimeout(function () 
{ 
    // As it is an Asynchronous function it will be scheduled to run after the program ends
    console.log("Ends After 3 seconds \nHello")
}, 3000);
console.log("End");

// // CallBack function=> outer function passed as an arument to a 
// // function & it calls the outer function to complete an action.
// function loadScript(src,hello)
// {
//     let script = document.createElement("script");
//     script.src=src;
//     script.onload=function(){
//         console.log("Loaded Script "+src);
//         hello();
//     }
//     document.body.appendChild(script);   
// }

// function hello(){
//     console.log("Hello");
//     alert("Hello");
// }

// function newNew(){
//     console.log("new");
//     alert("newNew");
// }

// // loadScript(src,callback);
// loadScript("https://www.google.com",hello);
// // loadScript("4_call.js",hello);