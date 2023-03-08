// Conditional Expressions
/*
There are 3 types of condtional statements in JS
1) if...
2) if ...else
3) if ...else if ... else
*/
// let a= prompt("Hello World");
let a = "Hello World";
// Typecasting a string to a number
a = Number.parseInt(a);
// console.log(typeof a);
// console.log(a);
a = 2;
if (a > 18) {
    // alert("This is a valid age");
    console.log("This is a valid age");
}
else if (a < 9) {
    console.log("You are a kid & you cannot even think of Driving");
}
else {
    console.log("You can drive");
}

// Conditional Statements 
let b=112;
console.log("You are,",(b<18&&b<75?"Not able to drive":" able to Drive"));
// Homework: Use switch case statements and make a program
// mdn js javascript