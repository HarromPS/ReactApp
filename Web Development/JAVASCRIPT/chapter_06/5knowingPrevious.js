// const prompt=require('prompt-sync')();

// Insertion at the Adjacent of any node element
// => it is HTML/text/element
let find= document.getElementsByName("N");
console.log("This is HTML collection of a given element",find);

find= document.getElementsByName("N")[0];
console.log("This are the individual elements access like array",find);
find= document.getElementsByName("N")[1];
console.log(find);
find= document.getElementsByName("N")[2];
console.log(find);
find= document.getElementsByName("N")[3];
console.log(find);

// ele.getElementById(name) =>returns only one element
// because id for every elemet is unique
console.log("This is another collection by Ids");
let findId=document.getElementById("first");
console.log(findId);

// returns undefined
findId=document.getElementById("first")[0];
console.log(findId);
findId=document.getElementById("first")[1];
console.log(findId);
findId=document.getElementById("first")[2];
console.log(findId);
findId=document.getElementById("first")[3];
console.log(findId);

// e.elgetElementsByClassName(name) => returns the collection 
// of elements having same class names

// gives collection of all the elements with same class name
let class_name=document.getElementsByClassName("classs");
console.log("This is HTML collection of the elements with same class names",class_name);

class_name=document.getElementsByClassName("classs")[0];
console.log("This are invidiual elements like arrays",class_name);
class_name=document.getElementsByClassName("classs")[1];
console.log(class_name);
class_name=document.getElementsByClassName("classs")[2];
console.log(class_name);
class_name=document.getElementsByClassName("classs")[3];
console.log(class_name);