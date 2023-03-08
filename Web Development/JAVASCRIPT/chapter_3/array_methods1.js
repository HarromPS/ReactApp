const prompt=require('prompt-sync')();
// Array Methods

// 1) To convert an array into a stirng 
// .toString()
let num=[1,2,3,4,15,25];
let string=num.toString();
console.log(string);

// 2) join() - joins the elements of the array seperated by a seperator
// like - num.join("_");    or  num.join("-");
string=num.join("_");
console.log(string);
string=num.join("*");
console.log(string);
string=num.join(" and ");
console.log(string);

// 3) pop() - removes the last element of the array & updates the
// original array & returns the popped value
let x=num.pop();
console.log(num);
console.log(x); // returns the popped value 

// 4) pop() - add a element at last of the array & updates the
// original array & returns the new length of the array
let y=num.push(12);
console.log(num);
console.log(y); // returns the new length of the array

// 5) shift() - removes 1st element & returns it
y=num.shift();
console.log(num);
console.log(y);

// 6) unshift() - adds elements at the beginning and returns new
// array length
y=num.unshift(23);
console.log(num);
console.log(y);
