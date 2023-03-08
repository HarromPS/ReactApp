const prompt = require('prompt-sync')();

// String --> is a collection of characters
// Syntax: 
let friend = 'Hello';
console.log("This is a Single quote string: ", friend);
console.log("This is the length of the string: ", friend.length);

let name = "World";
console.log("\nThis is a Double quote string: ", name);
console.log("This is the length of the string: ", name.length);

// Invalid token in Javascript
// let name1="World';
// console.log("\nThis is a Single + Double quote string: ",name);

// Printing the single characters of the string 
console.log("\nCharacters of the string are as:");
console.log(name[0]);
console.log(name[1]);
console.log(name[2]);
console.log(name[3]);
console.log(name[4]);

// TEMPLATE LITERALS
// 1) Back tick is also used to create strings
let sentence=`This is a string`;
console.log(sentence);

// 2)  We can use single as well as double quotes in template literals 
sentence=`The name "is" Amit's`;
console.log(sentence);

// 3) We can directly insert VARIABLES into the template literals.
let boy1="Amit";
let boy2="Rohan";
// Syntax:
sentence=`\nThis is a use of template literal\n${boy1} is a friend of ${boy2}`;
// Amit is a friend of Rohan
console.log(sentence);

// if we use quotes in a sentence more than two times JS misunderstands it.
// E.g
// let name2='Adam D'Angelo';  // will give error
// To solve this 
// 4) String Escape Sequence (single quote \'),(double quote \")
// like \n, \b, \t, 
// let name2='Adam D'Angelo';  // will give error
let name2='\nThis is a single quote escape sequence\nAdam D\'Angelo';  
console.log(name2);
name2='This is a double quote escape sequence\nAdam D\"Angelo';  
console.log(name2);




