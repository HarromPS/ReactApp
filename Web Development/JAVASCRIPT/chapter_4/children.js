// const prompt=require('prompt-sync')();
/*
Children, Siblings, Parents in DOM tree
<HTML> tag is a parent of <head> & <body> tag & <head> & <body> tags are 
childrens of <html tag.

element.firstChild ==> first child element
element.lastChild ==> last child element
element.childNodes ==> child nodes
*/

// accessing the children of the body 
console.log(document.body.firstChild);
// is a text

// accessing the children of the head 
console.log(document.head.firstChild);
// is a text

// accessing the last child of the body element
console.log(document.body.lastChild);

// accessing the last child of the head element
console.log(document.head.lastChild);

// accessing all child nodes 
console.log(document.body.childNodes);

// Accessing first nodes as an array
console.log(document.body.childNodes[0]);

// Accessing last nodes as an array
console.log(document.body.childNodes.length-1);
// 15

// To check if there is a child node in an element
console.log(document.body.hasChildNodes());
// returns true if there is a child node else false

// Nodes - refers to list 
// To convert a list into array we use array method called 
// Array.from objects 
let array=Array.from(document.body.childNodes);
// Now we can use it like an array 
console.log(array);
console.log(array[0]);
console.log(array[1]);
console.log(array[2]);
console.log(array[3]);
console.log(array[4]);

// array methods won't work 
// array.forEach(element => {
//     return element*2;
// });