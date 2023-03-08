const prompt = require('prompt-sync')();
// Practice set 2
//Q1. Use logical operator to find whether the age of a person
// lies between 10 & 20 ?
/*
let age = prompt("What is your age? ");
console.log(age);
if (age > 10 && age < 20) {
    console.log("Your age lies between 10 & 20 ");
}
else {
    console.log("Your age does not lies between 10 & 20 ");
}
*/

/*
// Q2. Demonstrate the use of switch case statement in JS
let b = prompt("Enter your age: ");
// console.log(typeof b);  // b=is taken as a string
// Converting into a number "b=Number.parseInt(b);""
// console.log(b);
switch (b) {
    case '10':
        console.log("Your age is 10");
        break;
    case '11':
        console.log("Your age is 11");
        break;
    case '12':
        console.log("Your age is 12");
        break;
    case '13':
        console.log("Your age is 13");
        break;
    default:
        console.log("Your age is not found");
        break;
}
*/

/*
// Q3. Write a JS program to find whether a number is divisible 
// by 2 & 3
let num=prompt("Enter a number: ");
num=Number.parseInt(num);
if(num%2==0 && num%3==0){
    console.log("Your number is Divisible by 2 & 3");
}
else{
    console.log("Your number is Not Divisible by 2 & 3");

}
*/
/*
// Q4. Write a JS program to find whether a number is divisible 
// by either 2 or 3
let num=prompt("Enter a number: ");
num=Number.parseInt(num);
if(num%2==0 || num%3==0){
    console.log("Your number is Divisible by 2 & 3");
}
else{
    console.log("Your number is Not Divisible by 2 & 3");

}
*/

// Q4. Print "you can drive" or "you cannot drive" based on the age 
// being graeter than 18 years using ternary operator
let a=prompt("Enter your age :");
a=Number.parseInt(a);
console.log(a>18?"You can drive":"You cannot drive");