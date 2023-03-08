const prompt=require('prompt-sync')();
// Walking the DOM
/*
Means manipulating the elements of the HTML page using JS
whenever we access the HTML page means 

DOM tree - In an HTML page <html> is a root element , <head> is a children element
& <body> is also a children element & text Node is always a leaf 
leaf of the tree.

Element Node - <html> <head> <body>
Text Node - text
*/

// Walking the DOM 
document.head;  // returns the head of the document tree
document.body;  // returns the body of the document tree
document.documentElement; // returns the HTML
document.title;     // returns the string
// use in 
