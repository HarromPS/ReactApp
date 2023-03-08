const prompt = require('prompt-sync')();
// A) Map(); loop
// Used to create arays from each of the array elements
let arr = [10, 20, 30];
let newArray=arr.map((val )=>
{
    console.log(val);
    return val;
});
console.log(newArray);
// There are 3 additional arguments in both forEach & map loops
// 1)
console.log("Will print the values of the array from 1st index");
arr.map((value)=>
{
    console.log(value);
})
// 2)
console.log("Will print the values + indexes of the array from 1st ");
arr.map((value,index)=>
{
    console.log(value,": ",index);
})
// 3)
console.log("Will print the values + indexes + array itself of the array from 1st ");
let nA=arr.map((value,index,array)=>
{
    console.log(value,": ",index,"=>",array);
    return value+3;
})
console.log("So the new Array is: ");
console.log(nA);

// B) filter((value));
// creates a new array of the elements which passes the test 
// or which are returned to be true 
nA=arr.filter((value)=>
{
    return (value<25);
});
console.log("So the filtered Array is: ");
console.log(nA);

// reduce(); method
// reduces the array by making operations on each of the array
// element and combining the result returns the last result

let array2=[1,2,3,4,5,6];
let NA=array2.reduce((i,j)=>
{
    return i+j;
});
console.log("The combined result is: ",NA);
// A function can be made outside & seperately and variables can be passed as 
// arguments 
const red=(i,j)=>
{
    return (i+j);
}
let x=red(1,2);
console.log("The value addition ",x);