// const prompt=require('prompt-sync')();

// text content = >provides the only text inside the element minus 
// all the tags
console.log(document.body.textContent);
// Both are same
console.log(document.body.firstChild.nodeValue);

// hidden attribute => hides the content from being visible to the 
// user

// This makes it visible again
console.log(document.hidden);   // true
let a=document.hidden;
a=false;  
console.log(a);


