// const prompt=require('prompt-sync')();
// Q3 Create a promise which rejects after 3 seconds, use async/await
// to get its value, use try-catch to handle the error


let n = () => {
    return new Promise((resolves, reject) => {
        setTimeout(() => {
            reject(new Error("After 3 sec Promise Rejected"));
        }, 3000);
    });
}
let a1 = async () => {
    try {
        let c = await n();
        console.log(c);
    }
    catch (error) {
        console.log("Error Caught " + error);
    }
}
a1();
