// const prompt=require('prompt-sync')();

// WAP using Promise.all() inside an async/await to await 3 promises
// Compare the results with case where we await these promises one by one.

let p1 = async () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("Promise 1 resolved");
        }, 1000);
    });
};
let p2 = async () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("Promise 2 resolved");
        }, 2000);
    });
};
let p3 = async () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("Promise 3 resolved");
        }, 3000);
    });
};

let x = async () => {

    // let a1= await p1();
    // let a2= await p2();
    // let a3= await p3();

    let a1= p1();
    let a2= p2();
    let a3= p3();
    console.log(a1,a2,a3);
    
    let a = await Promise.all([a1, a2, a3]);
    console.log(a);
    console.timeEnd("run");

    // let a2=await Promise.all([p1,p2,p3]);
    // console.log(a2);
}
x();