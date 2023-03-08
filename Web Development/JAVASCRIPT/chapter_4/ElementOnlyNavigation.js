// const prompt=require('prompt-sync')();
const changeColor=()=>{
    document.body.firstElementChild.style.background="red";
}
let a= document.body;
console.log("First Child of document body is ",a.firstChild);
console.log("First Element Child of document body is ",a.firstElementChild);

// Element only navigation helps to navigate only to elements 
// & not comment or text nodes .
console.log("Previous element sibling",a.previousElementSibling);
console.log("Next element sibling",a.nextElementSibling);
console.log("Last element child",a.lastElementChild);
// for(let i=0;i<10;i++)
// {
// console.log(document.body.firstChild);
// }