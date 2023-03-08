// const prompt=require('prompt-sync')();
// Async => any function can be created made async 
// it is ensured that it return a promise & non-promise is
// wrapped into it.
// Syntax:
async function functn() {
    return 7;
}

functn().then(
    (value) => {
        console.log(value);
    }
);

async function func() {
    let homeWhether = new Promise((resolve, reject) => {
        setTimeout(() => {
            // console.log("32 Degree celcius");
            resolve("data 32");
        }, 4000);
    });

    let currentWhether = new Promise((resolve, reject) => {
        setTimeout(function () {
            // console.log("35 Degree Celcius");
            resolve("data 35");
        }, 6000);
    });

    // can be done like 
    // homeWhether.then(alert("promise 1"));
    // currentWhether.then(alert("promise 2"));

    // more better way 
    // store in a variable -> using await
    console.log("Promise 1 is fetching....");
    let x = await homeWhether;   // waits until the promise is resolved & x contains the resolved values
    console.log("Promise 1 is fetched: " + x);
    console.log("Promise 2 is fetching....");
    let y = await currentWhether;
    console.log("Promise 2 is fetched: " + y);

    // return the promise
    return [x, y];
}

const cherry = async () => {
    console.log("Cherry arrow function is running");
    return 'b';
}
// calling the function
// console.log("Using Await");
// let a = func();   // promise returned i.e a is a promise now 

// // both function runs parallely but func wait for resolution
// let b=cherry();
// a.then((value) => {
//     console.log(value);
// }); 

// proof that a & b will execte one after other
const hello = async () => {
    console.log("Using Await");
    let a = await func();
    let b = await cherry();
    a.then((value) => {   //==> a now contains the value
        console.log(value);
    });
    console.log(a);
    console.log(b);
}
hello();
