// const prompt=require('prompt-sync')();

let ele=document.getElementById("two");
ele.classList.add("green");
console.log(ele.classList.add("green"));
ele.classList.remove("green");
console.log(ele.classList.remove("green"));
ele.classList.toggle("green");
console.log(ele.classList.toggle("green"));
ele.classList.contains("green");
console.log(ele.classList.contains("green"));

// 1) className & classList
let first=document.getElementById("one");
let second=first;
first=first.classList;
// console.log(first);

// to manipulate the classes of the DOM
first=document.getElementById("one");
// console.log(first);

// 1) (className) Add the class-> add a new class, but previous classes gets removed
first.className="orange";

// to retain the existing classes write all the class with new class name
first.className="text-black red orange";

console.log(first);

// 2) (className) Removing a class
first=first.classList; 
console.log(first);
// to remove a class - red in this case
// ele.classList.remove("class")
first.remove("red");
console.log(first);

// OR use ele.classList.add("clas_name");
second.classList.add("red");
console.log(first);

// 3) ele.classList.toggle("class") -> adds a class if not exists 
// else removes the existing class
first.toggle("red");
console.log(first);

// 4) ele.classList.contains("class") => returns true if the class exists in the element
console.log(first.contains("red"));

first.toggle("red");
console.log(first);

console.log(first.contains("red"));