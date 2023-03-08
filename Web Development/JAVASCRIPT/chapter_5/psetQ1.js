// const prompt=require('prompt-sync')();

// Q1 Create a nav bar & change the colour of its first element to red
// let c=document.getElementsByClassName("nav")[0].firstElementChild.style.color="red";
// // let c=document.getElementsByClassName("nav")[0].firstElementChild;
// console.log(c);

// represents the first element child of nav tag
// under tag name/class name ->mention the index of the element.
// because we have text as well as comment nodes so Element childs
let change = document.getElementsByClassName("nav")[0].firstElementChild;
change.style.color = "red";
// let change = document.getElementsByTagName("nav")[0].firstElementChild;
// change.style.color="red";
console.log(change);

// Q2 Create a table without the body, "view page source" to check if ti has tbody or not
// => No, view page source shows the raw page material
// inpect shows the tags in which it is important => auto correction

// Q3 Create an element with three children, then change the color 
// // of the first & last child to green
let FirstChild=document.getElementById("first_last").firstElementChild.style.color="green";
console.log(FirstChild); 

let lastChild=document.getElementById("first_last").lastElementChild.style.color="green";
console.log(lastChild);

// Q4 Write a JS program to change the background of all the li to cyan 
// Step 1: make array from the HTML collection
let array = Array.from(document.getElementsByTagName("li"));

// Steo 2: run for each loop to change the background color of each li element
array.forEach((element) => {
    element.style.background = "orange";
});

// Q5 Which of the following is used to look for the farthest ancestor that matches a given CSS selector.
// => none