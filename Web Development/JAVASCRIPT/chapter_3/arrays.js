const prompt=require('prompt-sync')();
// Arrays in JS
// Array are used to store more than one variable value
// Can store different values as well 
// Arrays are mutable means the values of the array can be changed.

// Ways to create Array in JavaScript
let arr=new Array
let marks_students=[56,78,67,78];
console.log("The marks_students is:",marks_students);

// Accessing the values of the arrays
console.log("1 element:",marks_students[0]);
console.log("2 element:",marks_students[1]);
console.log("3 element:",marks_students[2]);
console.log("4 element:",marks_students[3]);

// Undefined because index 4, 5 does not exist in the class array
console.log("4 element:",marks_students[4]);
console.log("4 element:",marks_students[5]); 

let n=marks_students.length;
console.log("The length of the class is:",n);
console.log(typeof n);
for(let i=0;i<n;i++)
{
    console.log(marks_students[i]);
}

// In arrays in JS we can use different types in arrays
console.log();
const shop=[10,20,"Shirt",true,false,null];
for(let i=0;i<shop.length;i++)
{
    console.log(shop[i]);
}
// Changing the values of the array
shop[1]=100;

// Adding new values to the array
shop[5]=23;
shop[6]=24;
shop[7]=25;
console.log(shop);

// Type of array is object
console.log(typeof shop);
// just like indexes(keys) on left & values on right 
// like key value pairs
const object={
    0:1,
    1:2,
    2:3
}
console.log(object);

// keys/ length of the array is 8 so the loop will run for 8 times
console.log("The keys/index in the array");
for(index in shop)
{
    console.log(index);
}
console.log("The values at the indexes/keys are");
for(value of shop)
{
    console.log(value);
}