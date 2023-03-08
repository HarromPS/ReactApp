const prompt=require('prompt-sync')();
// let compare=(a,b)=>
// {
    //     return a-b;
    // }
    // let array=[10,2,53,1,1];
    // array.sort();
    // console.log(array);
    // array.sort(compare)
    // console.log(array);
    
// Loops with arrays in JS
let num=[23,323,34,45,2,44,55];
for(let i=0;i<num.length;i++)
{
    console.log(num[i]);
}
console.log();
// 1) forEach loop - runs for each element in the array
// we can write it as a function to the array
// Used to perform some operations on each element in the
// array
console.log("ForEach");
num.forEach((i)=>   // i = elements in the array
{
    // function to print the elements-1; 
    console.log((2*i)-(i+1));
    // console.log(i-1);
});
console.log(num);

// 2) Array.from() - used to create objects from any other object
let obj={
    a:10,b:20,c:30
}
// obj is an object
console.log(typeof obj);
// if we try to use forEach loop for the object it will give the error
// because forEach is not a function
// obj.forEach((i)=>
// {
//     console.log(i);
// })

// But if we use forin will work fine for the object
for( i in obj)
{
    console.log(i);
}
// To create an array from the object/string we use Array.from() loop
let string="Hello";
let array2=Array.from(string);
console.log(array2);

array2=Array.from(obj);
console.log(array2);

// Array is an object as well
// so we can use for in-> for the keys & for of->for the values of 
// the iterator
let arr=[10,20,30];
// keys or indexes
for( item in arr)
{
    console.log(item);
}
// values at the indexes or keys
for( let item in arr)
{
    console.log(arr[item]);
}
// values at the keys or indexes
for( item of arr)
{
    console.log(item);
}