// const prompt=require('prompt-sync')();

// Attributes Methods - Set & Get 
let first= document.getElementById("ThisIsAIdName");
// let first = document.getElementsByClassName("ThisIsAClassName");
console.log(first);

// 1) ele.getAttribute(Attribute_Name) => returns the value of 
// the attribute
let a = first.getAttribute("class");
// value = ThisIsAClassName ;
console.log(a);

// 2) ele.hasAttribute(Attribute_Name) => return true if has 
// the attribute
a = first.hasAttribute("id");
console.log(a);
a = first.hasAttribute("style");
console.log(a);

// 3) ele.setAtribute(name,value);
a=first.setAttribute("class","New World");
console.log(a);
a=first.setAttribute("hidden",true);
console.log(a);

// 4) ele.removeAttribute(name); ->removes the attribute from the element
a=first.removeAttribute("hidden"); // removes hidden attribute from the element div
console.log(a);

// 5) ele.Attributes; ->lists the collection of all the attributes
a=first.attributes
console.log(a);