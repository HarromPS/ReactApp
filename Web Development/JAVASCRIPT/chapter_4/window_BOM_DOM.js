// const prompt=require('prompt-sync')();
console.log(window);    // we will be able to see the window object
// window object is a global object
// means window object can access all the functions of JS 

// we can write
// alert("Hello"); // as
window.alert("World");

// DOM- DOCUMENT OBJECT MODEL
// whole HTML page becomes a JS object called as a document
window.console.log(document);
window.console.log(document.body);
// window.console.log(document.body.style.background="green");
let x = prompt("Enter a colour");
window.console.log(document.body.style.background = x);

// BOM- BROWSER OBJECT MODEL
// repersents the additional objects provided by the browser
// works with everything except "document"
// alert/prompt/confirm are the parts of BOM
let choice = prompt("Do you want to go to google\nPress 1");
choice = Number.parseInt(choice);
if (choice == 1) {
    location.href = "https://www.google.co.in/";
}