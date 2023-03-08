// const prompt=require('prompt-sync')();

setTimeout(() => {
    console.log("Hacking the network.....");
}, 1000);

// There are chances having errors coming in the program 
// so to resolve this
// ==> Try & catch are used for the smooth execution of the program without any error

try {    // tries to execute if there is no error 
    console.log(hello); // 'hello' not defined
}
catch (error) {
    console.log("Error Catched");
}
setTimeout(() => {
    console.log("Fetching username & password.... Please Wait");
}, 2000);

setTimeout(() => {
    console.log("Hacking your neighbours site....");
}, 3000);

setTimeout(() => {
    console.log("__________Hacked________");
}, 5000);


// try-catch works sychronously
// i.e it is scheduled 
// if setTimeout is constructed in try & there is error code
// catch won't catch it.

// e.g
try{
    setTimeout(()=>
    {
        console.log(hello);
    },3000);
}
catch(error){
    console.log(error);
}