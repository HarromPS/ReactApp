// const prompt=require('prompt-sync')();

// Searching the DOM -> searching the dom functions 

// Change the card title to red by searching the class name
let card = document.getElementsByClassName("card-title")[0];
card.style.color="red";

let query=document.querySelectorAll(".card-title");
query[0].style.color = "red";
query[1].style.color = "green";
query[2].style.color = "blue";
console.log(query);

document.querySelector(".this").style.color="red";
document.querySelector(".this").style.background="white";

// returns the element with the tag name
console.log(document.getElementsByTagName("a"));

// returns the element with a tag name of first element by 
// CSS selector
console.log(document.querySelector(".card").getElementsByTagName("a"));
console.log(document.getElementsByName("search"));
