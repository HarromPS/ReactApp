const prompt = require('prompt-sync')();
// Pset 05
const clear = (arr = []) => {
    for (let i = 0; i < arr.length; i++) {
        delete arr[i];
    }
}
// Q1) Create a array of numbers & take user input from 
// the user to add numbers to this array.
let array = [], a;

// console.log("Enter the numbers in array: ");
// for (let i = 0; i < 5; i++) {
//     a = prompt();
//     a = Number.parseInt(a);
//     array.push(a);
// }
// console.log(array);
// if(array!=null)
// {
//     console.log("A");
// }
// clear(array);
// Q2) keep adding elements in the array until enter the array in Q1
console.log("Enter the numbers in array: ");
do {
    a = prompt("Enter a number: ");
    a = Number.parseInt(a);
    if (a == 0) {
        array.unshift(a);
    }
    else {
        array.push(a);
    }
} while (a != 0);
console.log(array);

// Q3) filter for the numbers which are divisible by 10 from the array
let arr = [];

// console.log("Enter the numbers in array: ");
// for (let i = 0; i < 5; i++) {
//     a = prompt();
//     a = Number.parseInt(a);
//     arr.push(a);
// }
// console.log(arr);
let array2 = arr.filter((x) => {
    return (x % 10 == 0);
});
console.log(array2);
// for(let i=0;i<arr.length;i++)
// {
//     delete arr[i];
// }

// Q4) Create a new array of square of given numbers
let sq_arr = arr.map((n) => {
    return (n * n);
})
console.log(sq_arr);

// Q5) Use reduce to calculate factorial of a given numbers from 
// an array of the first n natural numbers 
// for (let i = 0; i < arr.length; i++) {
//     delete arr[i];
// }
clear(arr);
console.log("Enter numbers to find the factorial of: ");
let A = prompt();
A = Number.parseInt(A);
while (A != 0) {
    arr.push(A);
    A--;
}

let fact = arr.reduce((x, y) => {
    return(x * y);
});
console.log("The factorial is",fact);