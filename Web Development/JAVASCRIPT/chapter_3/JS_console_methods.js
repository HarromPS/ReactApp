const prompt=require('prompt-sync')();
console.log(console);   // used to print the list of all the console methods

// used to assert/to check the correctness of a condition
// if true then no Warning else Assertion failed
console.assert(50>10);
// undefined in console browser - return of the console is undefined

// used to show the error 
console.error("This is an error");
// This is an error

// used to clear the console
console.clear();

let obj=
{
    a:1, b:2, c:3
}
// list all the key value pairs in a tabular form 
console.table(obj);

// used to give the warnings 
console.warn("Back to Safety");

console.log("log");// console.time();
// console.timeEnd(); -- allows a timer in the console for purpose

console.time("forLoop");
for(let i=0;i<5;i++)
{
    // console.log(i);
}
console.timeEnd("forLoop");

console.time("whileLoop");
let i=0;
while(i<5)
{
    // console.log(i);
    i++;
}
console.timeEnd("whileLoop");
// console.clear();