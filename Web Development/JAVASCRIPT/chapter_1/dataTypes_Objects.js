// There two types of datatypes in Js
// 1) Primitive, 2) Objects
/*
1) There are 7 primitive datatypes: NNBBSSU
NULL, Number, Symbol, String, Boolean, BigInt, Undefined

2) Objects are non-primitive datatypes 
they are key-value pairs key-variable; value-datatype
*/
let a = null; // NULL
let b = 23;  // Number
let c = true;  // boolean
let d = BigInt;
let h = BigInt("10") + BigInt("112");  // BigInt
let e = Symbol("I am a symbol");  // symbol
let f = "Hello";  // String
let g = undefined;  // Undefined

console.log(a, b, c, d, e, f, g, h);
// To find the type of a variable use keyword 'typeofa
console.log(typeof a, b);  // Object
console.log(typeof b, c);  // Number
console.log(typeof c);

// Objects
const item = {
    "Hello": true,  // key-value pairs
    "World": false,
    67: "Got it"    // End
}
console.log(item["we"]);