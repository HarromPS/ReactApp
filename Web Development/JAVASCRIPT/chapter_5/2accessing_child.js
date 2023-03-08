// const prompt=require('prompt-sync')();

/*
First Child, Last Child, & Child Nodes
*/

// text in accessingChild.html file
console.log(document.body.firstChild);

// <div> tag 
console.log(document.body.lastChild);

// returns the child node at 1st object
// Not an Array but a list
console.log(document.body.childNodes[1]);

// to check if there are child nodes
// returns true if there are child nodes    
console.log(document.body.hasChildNodes());

// to get child nodes list
console.log(document.body.childNodes);

// to convert the object model in the array
let arr=Array.from(document.body.childNodes);
for(let i=0;i<arr.length;i++){
    console.log(arr[i]);
}