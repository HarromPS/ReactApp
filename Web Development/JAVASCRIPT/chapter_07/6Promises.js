const prompt = require('prompt-sync')();
// Promise -> A soln to callback hell
// code either executes or fails

// +  .catch() & .then()
let promise = new Promise(function (resolve, reject) // BuiltIn function
{
    // 2 properties - 
    // 1) state - changes to fulfilled(resolve) or rejected(reject)
    // 2) result - resolve->it's value or reject->it's value
    console.log("Hello");

    // resolved ->fullfilled value=43
    resolve(43);
});
console.log("Promises");

// as setTimeout is Asynchronous in nature
setTimeout(function () {
    console.log("After 2 seconds");
}, 2000);
console.log("Three");
console.log(promise);

/**
 * In Browser
 Hello
VM33: 6 Promises
VM33: 13 Three
VM33: 14 Promise {<fulfilled>: 43}
undefined
VM33:11 After 2 seconds
 */

// Parallel Execution of Promises
let p1 = new Promise(function (resolve, reject) {
    console.log("Pizza Promise is Pending");
    setTimeout(function () {
        console.log("Pizza Promise is Fullfilled");
        resolve(299);
    }, 3000);

    // has to be resolved or rejected
});

let p2 = new Promise(function (resolve, reject) {
    console.log("Cake Promise is Pending");
    setTimeout(function () {
        console.log("Pizza Promise is rejected");
        reject(new Error("Some Error Occured"));
    }, 3000);

    // has to be resolved or rejected
});
console.log(p1, p2);

// Syntax: promise.then(function(result){...} , function(error){...}){ ..... }

p1.then((value) => {
    console.log("Price: " + value);
});

// for only fullfilled promises
/*
 let prom=new Promise(resolve => {
    setTimeout(()=>resolve("done"),2000);
 }) 
 prom.then(alert);
 */
p1.then((value) => {
    console.log("Price: " + value);
},(error)=>{
    console.log(error);
});
// Or
// Syntax: promise.then(null, function(error){...}){ ..... }
// Or .catch();


p2.catch((error) => {
    console.log(error + " some error");
});

// Pizza Promise is Pending
// VM168:12 Cake Promise is Pending
// VM168:21 Promise {<pending>} Promise {<pending>}
// Promise {<pending>}
// VM168:5 Pizza Promise is Fullfilled
// VM168:25 Price: 299
// VM168:15 Pizza Promise is rejected
// VM168:30 Catched the error

/*
In browser
Promise {<pending>}
[[Prototype]]: Promise
[[PromiseState]]: "pending"
[[PromiseResult]]: undefined
undefined
VM39:5 Promise is Fullfilled
*/