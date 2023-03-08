// Practice set Q1
// Create a variable of type string & try to add a number to it.
let st="String";
let num=23;
// let num=Symbol("_10");   // cannot convert a symbol to a string
// console.log(st+num);
// console.log(st+num);
console.log("The Addition of a string & a number is:");
console.log(st+num);

// Q2. Use the type of operator to find the datatype of the string in the 
// last question.
console.log("The type of variable in last question was:");
console.log(typeof (st+num));

// Q3. Create a const object in javascript. Can you change it 
// to hold a 'number' later?
const object=
{
    name : "Hello",
    section: 1
}
// object= 10;  // No, it Cannot be changed to store another datatype later.
console.log(object);

// Q4. Try to add a 'new key' to the constant object in previous problem.
// Were you able to do it?
object['Friend']="World";
object['section']=2;   // 
console.log(object);

//Q5. Write a javascipt program to create a word meaning dictionary of 5 words.
const dictionary=
{
    air: "hawa",
    10: "Number",
    mouse: "Rat",
    Water: "H2O",
    apperciate: "Respect"
}
console.log(dictionary);
