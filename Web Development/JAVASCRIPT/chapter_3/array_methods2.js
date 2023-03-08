const prompt=require('prompt-sync')();

// 7) delete array[] - deletes element from the array using their indexes
let num=[1,2,3,4,4,5,6];
delete num[3];
console.log(num);

// 8) concat() - adds one or more than one arrays
let num1=[7,8,9,10];
let num2=[11,12,13,14];
let newArray=num.concat(num1,num2);
console.log(newArray);

// 9) sort() - sorts the array alphabetically
let compare=(a,b)=>
{
    return a-b;
}
let a=[23,3,21,10,6,45,12];
a.sort();       // modifies the original array 
console.log(a);
newArray.sort(compare);
console.log(newArray);
a.sort(compare);
console.log(a)

// 10) reverse - reveses the elements of the array
a.reverse();
console.log(a);

// 11) splice() - used to add new elements in the array 
let b=[1,2,3,4,5,6,];
console.log(b);
// (2- position ; 2- no of elements to remove; 12,23 are the new elements)
b.splice(2,2,12,23);
console.log(b);
console.log(typeof b);

// 12) slice() - slices out a piece from the array 
// but it needs a new array to store the spliced elements 
let c=b.slice(2);
console.log(c);
c=b.slice(1,7); // last parameter is excluded
console.log(c);