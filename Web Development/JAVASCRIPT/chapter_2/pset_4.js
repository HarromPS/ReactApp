const prompt=require('prompt-sync')();
// Practice set 03: Strings and its methods
// Q1) What will the following print in JS?
// console.log("har\"".length); ==> 4
console.log("har\"".length); // har = 3 , \" = 1

// Q2) Explore the includes , startsWith & endsWith function
// of a string.
const sentence ='The quick brown fox jumps over the lazy dog.';
let word="fox";
console.log(`The word "${word}" ${sentence.includes(word)? 'is': 'is not' } in the sentence`);

// startsWith 
word="The";
console.log(`The sentence start with "${word}" ${sentence.startsWith(word) ? 'is' : 'is not'} true`);

// endsWith 
word="dog.";
console.log(`The sentence ends with "${word}" ${sentence.endsWith(word) ? 'is' : 'is not'} true`);
console.log(sentence.endsWith(word));

// Q3)A] Write a program to convert a given string to upper case.
let string="Hello World";
// for(let i=0;i<string.length;i++)
// {
//     console.log(string.slice(i,i+1).toUpperCase());
// }
console.log(string.toUpperCase());

// Q3)B] Write a program to convert a given string to lower case.
// for(let i=0;i<string.length;i++)
// {
//     console.log(string.slice(i,i+1).toLowerCase());
// }
console.log(string.toLowerCase());


// Q4) Extract the amount of this string "Please give Rs 1000".
let string1="Please give Rs 1000";
let amount=string1.slice("Please give Rs ".length);
console.log(amount);
console.log(typeof amount);

amount=Number.parseInt(string1.slice("Please give Rs ".length));
console.log(amount);
console.log(typeof amount);

// Q5) Try to change the  character of a given string.
let string2="HelloWorld";
string2[3]="A";
console.log(string2);   // HelloWorld is will not changed because string is immutable.