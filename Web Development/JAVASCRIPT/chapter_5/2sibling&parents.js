// const prompt=require('prompt-sync')();

/*
Siblings & Parents -> <head>, <body> are the parents of <p>, <div>,
<h1>...<h6>, <ul>..<li>..<ul>, <ol>..<li>..<ol>, and many more tags in html.

Parents Node will return if it is a Node.
Parents Node will return if it in case a comment or a text node.
Parents Node has to be a node.

Sibling Node will return if it is a valid node else return null.
e.g head element 
*/

// returns the document node
console.log(document.documentElement.parentNode);

// returns the html Node
console.log(document.body.parentNode);

// returns null
// console.log(document.parentNode);

// returns the parents of the first child
console.log(document.body.firstChild.parentNode);

// returns the parent of the ith child
console.log(document.body.childNodes[0].parentNode);

// returns the parent of the last child
console.log(document.body.lastChild.parentNode);