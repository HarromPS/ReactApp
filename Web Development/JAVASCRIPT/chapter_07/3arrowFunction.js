// const prompt=require('prompt-sync')();

// Arrow Functions -> functions defined using an Arrow
// Shortcut way to define a function
// Syntax: 
/*
let var = (parameters) => 
{
    // body
}
*/
let greet = () => {
    console.log("Hello");
}

// calling the function 
greet();

// With parameters
const sum = (a, b) => {
    console.log("The sum is:", a + b);
}
sum(2, 3);

// Shortcut of Shortcuts
let sum2 = (a, b) => a + b;       // returns a+b
console.log(sum2(1, 2));

// shortcuts for one argument
let half = a => a / 2;
console.log(half(34));

// functions for objects 
let object =
{
    names: ["Amit", "Rohan", "Abhijit", "Hardik"],
    // function in object 
    speak() {
        // Runing a loop for each name of property 'names'
        this.names.forEach((name1)=>{console.log("Go " + name1);});
    },

    greet: "Hello",
    speak2() {
            // undefined this.greet -> as this refers to its own.SS8 v
        this.names.forEach(function functn(name1){console.log(this.greet);});
    }
};

// calling the function element of object 
object.speak();
object.speak2();