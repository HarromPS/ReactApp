const prompt = require('prompt-sync')();
// Practice Set 3:
// Q1. Write a program to print the marks of a
// student in an object using for loop
const student =
{
    Amit: 23,
    John: 89,
    Umang: 78,
    Ima: 67
}
let i;
// for(i=0;i<Object.keys(student).length;i++)
// {
//     console.log("The marks of "+Object.keys(student)[i]+" are "+student[Object.keys(student)[i]]);
// }
// Q2. Write a program in above question using for in loop
// for(let key in student)
// {
//    console.log(key);
// }

// Q3. Write a program to print "try again" until the user enters
// the correct number 
// let num=12;
// num=Number.parseInt(num);
// let i1=0;
// while(i1!=num){
//     console.log("Try again");
//     i1=prompt("Enter a number: ");
// }
// console.log("You have entered the correct number\n");

// Q4. Write a function to find the mean of 5 numbers
let j;
// function to find the mean
// const Mean = () => {
//     let mean = 0, x;
//     for (j = 0; j < 5; j++) {
//         console.log("Enter",j+1,"number:");
//         x = prompt();
//         x = Number.parseInt(x);
//         mean += (x);
//     }
//     return (mean/5);
// }
const mean=(a,b,c,d,e)=>
{
    return (a+b+c+d+e)/5;
}
// let v=Mean();
// console.log("The Mean of 5 numbers is: ",v);
console.log("The Mean of 5 numbers is: ",mean(1,2,3,4,5));