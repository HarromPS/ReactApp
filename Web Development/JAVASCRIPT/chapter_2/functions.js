const prompt=require('prompt-sync')();

// Function is used for organization of code
/*
It is used for a specific task & the code block can be used again
& again.
Can be used for different parameters.
 */
// Hello function to print hello to the console
const hello=()=>
{
    console.log("Hello! How are you?");
    return "HELLO"; 
}
// Writing a function for average calculation
function TwoplusAvg(x,y){
    // x & y are used as the local variable of the function 
    // And use within the function 
    console.log("Done");
    return (2+(x+y)/2);
    // return Math.round(2+(x+y)/2);
}
let a=1;
let b=2;
let c=3;
let str=hello();
console.log(str);
console.log("Two plus Average of a & b: ",TwoplusAvg(a,b));
console.log("Two plus Average of b & c: ",TwoplusAvg(b,c));
console.log("Two plus Average of a & c: ",TwoplusAvg(a,c));

// Another way to declare & define a function 
const sum=(a,b)=>
{
    let x= a+b;
    return x;
}
let a1=1;
let b1=2;
let c1=3;
console.log("The sum of a & b: ",sum(a1,b1));
console.log("The sum of b & c: ",sum(b1,c1));
console.log("The sum of a & c: ",sum(a1,c1));