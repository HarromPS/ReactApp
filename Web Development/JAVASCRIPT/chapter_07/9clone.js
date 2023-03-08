// const prompt=require('prompt-sync')();

let p1 = new Promise((resolve,reject)=>{
    setTimeout(function(){
        resolve(1);
    });
});
let p2 = new Promise((resolve,reject)=>{
    setTimeout(function(){
        resolve(2);
    });
});
let p3 = new Promise((resolve,reject)=>{
    setTimeout(function(){
        resolve(3);
    });
});
let p4 = new Promise((resolve,reject)=>{
    setTimeout(function(){
        // resolve(4);
        reject(new Error(4));
    });
});


// 1) Promise.all() access all at the same time
let x = Promise.all([p1,p2,p3,p4]);
x.then((value)=>{
    console.log("Promise.all(promise) resolved results=>"+value);
});

// 2) Promise.allSettled() results + values
x=Promise.allSettled([p1,p2,p3,p4])
x.then((value)=>{
    console.log("Promise.allSettled(promise) "+value);
});

// Promise.race(promise) =>returns the 1st competed promise
x=Promise.race([p1,p2,p3,p4]);
x.then((value)=>{
    console.log("Promise.race(promise) "+value);
});

// Promise.any(promise) =>returns the 1st resolved & not rejected promise
x=Promise.any([p1,p2,p3,p4]);
x.then((value)=>{
    console.log("Promise.any(promise) "+value);
});

// Promise.resolve(promise) =>returns resolved promises
x=Promise.resolve([p1,p2,p3,p4]);
x.then((value)=>{
    console.log("Promise.race(promise) "+value);
});

// Promise.reject(promise) =>returns rejected promises
x=Promise.reject([p1,p2,p3,p4]);
x.then((value)=>{
    console.log("Promise.reject(promise) "+value);
});