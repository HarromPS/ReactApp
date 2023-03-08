// const prompt=require('prompt-sync')();

// Allpromises will run parallely
let p1 = new Promise((resolve, reject) => {
    setTimeout(function () {
        // console.log("Promise 1 resolved");
        reject(new Error("..."));
        // resolve(1);
        // resolve("Yes 1");
    }, 3000);
});

let p2 = new Promise((resolve, reject) => {
    setTimeout(function () {
        // console.log("Promise 2 resolved");
        resolve(2);
        // resolve("Yes 2");
    }, 2000);
});

let p3 = new Promise((resolve, reject) => {
    setTimeout(function () {
        // console.log("Promise 3 resolved");
        resolve(3);
        // resolve("Yes 3");
    }, 1000);
});

// // Runs after the execution of corresponding promises
// p1.then((value) => {
//     console.log(value);
// });

// p2.then((value) => {
//     console.log(value);
// });
// p3.then((value) => {
//     console.log(value);
// });

// 1) To see all the values at the same time 
// Syntax:
let all = Promise.all([p1, p2, p3]);
all.then((value) => {
    console.log("Promise.all(promise)");
    console.log(value +" values");
    // console.log(typeof value); //=> returns an array of the values of the
    // returned values once all promises got executed
}).catch((error)=>{
    console.log("Error Found "+error);
})

// Note: If a single error found(rejected) => all other promises are ignored

// 2) To see the status & value of the promises (resolved/rejected)
// Syntax:
all = Promise.allSettled([p1,p2,p3]);
all.then((value)=>{
    console.log("Promise.allSetteled(promise)");
    console.log(value +" values");
    // console.log(value);
}).catch((error)=>{
    console.log("errrrrr"+error);
});

// 3) Promise.race(promise) => outcomes the 1st resolved promise
// if error encountered -> ignores other
all=Promise.race([p1,p2,p3]);
all.then((value)=>{
    console.log("Promise.race(promise)");
    console.log(value +" value");
    // console.log(value);
}).catch((error)=>{
    console.log("Promise.race(promise) "+error);
})

// 4) Promise.any(promise) -> 
all=Promise.any([p1,p2,p3]);
all.then((value)=>{
    console.log("Promise.any(promise)");
    console.log(value+" value");
});

// Promise.resolve(promise) ->returns a resolved promise
all=Promise.resolve([p1,p2,p3]);
all.then((value)=>{
    console.log("Promise.resolve(promise) "+value);
});

// Promise.reject(promise) ->returns a rejected promise
// status + value
all=Promise.reject([p1,p2,p3]);
all.then((value)=>{
    console.log("Promise.resolve(promise) "+value);
});