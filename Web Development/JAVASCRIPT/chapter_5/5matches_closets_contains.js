// const prompt=require('prompt-sync')();

// id1 gives the element by typing just the ID
// console.log(id1);

// The best perferend way to get the id is by ele.getElementById() :
let ids = document.getElementById("id1");
console.log(ids);

// ele.matches(CSS);

// to check if the id matches with the CSS selector 
// reuturns true if it matches else return false
console.log(ids.matches(".box"));

let sp1=document.getElementById("sp1");
// ele.closets(CSS)
// given CSS selector is in its ancestor or not
console.log(sp1.closest("#id1"));
//check the element first if it matches then returns the element as a CSS
// selector
// else checks for the parents & for the parents until it finds it 
// else return null

// ele.contains() -> returns true if contains the element
let div=document.getElementById("id1");
console.log(document.body.contains(div)); // returns true