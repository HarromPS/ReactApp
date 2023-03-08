const prompt = require('prompt-sync')();


// Properties & Methods of Strings 
// Strings are immutable == cannot be changed
// 1) length (Property+)
let name = "Hello";
console.log("Length:", name.length);

// 2) toUpperCase (Function)
console.log("Uppercase:", name.toUpperCase());

// 3) toLowerCase()
console.log("LowerCase", name.toLowerCase());

// 4) slice between
console.log("Slice:", name.slice(2, 4));

// 5) slice upto end
console.log("Slice:", name.slice(2));

// 6) Replace
console.log("Replace:", name.replace("Hello", "O"));

// 7) Concat
let friend = "Ram";
console.log("Concate: ",name.concat(" my friend ", friend, " How are you?"));
friend= "Hello " + "New " + "World";
console.log(friend);


// 8) Trim==> Removes whitespaces
let friend2="          World       ";
console.log("Trim:",friend2.trim());

// Printing string using for loop
let A="ABCDEFGH";
for(let i=0;i<A.length;i++)
{
    console.log(A[i]);
}