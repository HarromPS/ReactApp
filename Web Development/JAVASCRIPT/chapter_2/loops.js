const prompt = require('prompt-sync')();
/*
There are 5 types of loops in JS: 
1) for loop, 2) while loop, 3) do while loop, 4) for in loop ,
5) for of loop.
*/

// // For loops
// for(initialization; condition; incerment/decrement)
// {     // Code body          }
// if condition is false then for loops gets out
let sum = 0;
for (let i = 0; i < 5; i++) {
    sum += i + 1;
}
console.log(sum);
let a = prompt("Enter a number: ");
a = Number.parseInt(a);
for (let i = 0; i < a; i++) {
    if (i % 2 == 0 && i != 0) {
        console.log(i);
    }
}
// factorial
let fact = prompt("Enter a number to find factorial of a number: ");
fact = Number.parseInt(fact);
let x = fact;
for (let i = 1; i < x; i++) {
    fact *= i;
}
console.log("The factorial of", x, "is", fact);

// for of loops(variable of iterable)
// since object is not iterable so array or a string or iterable data structure 
for(let a of "string"){
    // will print the values of the iterable
    console.log(a);
}
console.log();

// For in loops : for(let a in obj)==> through keys of the object 
let object = {
    hello: 10,
    world: 34,
    hi: 23,
    toy: 12
}
for(let a in object){
    // will print the keys of the object
    console.log(a);
}

// while loop -- loops executes until the condition is true 
let n1=prompt("Enter a number: ");
n1=Number.parseInt(n1);
let i1=0;
while(i1<n1){
    console.log(i1+1);
    i1++;
}
// do while loop -- loops executes at least one time 
let n2=prompt("Enter a number: ");
n2=Number.parseInt(n2);
let i2=0;
do{
    console.log(i2+1);
    i2++;
}while(i2<n1);
console.log();
// Table of user input number
i2=0;
do{
    console.log(n1*(i2+1));
    i2++;
}while(i2<10);