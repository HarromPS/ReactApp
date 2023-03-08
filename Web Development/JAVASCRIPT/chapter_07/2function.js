// const prompt=require('prompt-sync')();
console.log("Functions in JavaScript");

let name1 = "Amit";
let name2="Ganesh";
console.log(name1);
console.log(name2);

// To reduce repeating we use functions
// syntax:
/*
function name(Parameters or NO-Parameters)
{
    // body
}
*/
function greetOne(Name)
{
    console.log(Name);
}

greetOne(name1);
greetOne(name2);

let a = 12, b=43;
function Sum(i)
{
    if(i<5)
    {
        console.log('Hello');
    }
    i++;
    // Sum(i+1); recursion error
    
}
// function has to called for the execution
Sum(0);

// Default Arguemnts in functions
function greet(name="Default Arguments1", name2="Default Arguments1")
{
    console.log(name,name2);
}
greet();    // prints "Default Arguments"
greet("Updated Arguments");    // prints "Name" as default parameters gets updated

// Returns in function
function returnVal(a,b,c)
{
    return a+b+c;
    // console.log("Returned");    // Unreachable code
}
let sum=returnVal(2,3,4);
// Additon using (3+sum) => 12
console.log("The sum of the numbers is(addition):"+(3+sum));

// concatanation => (3+sum) => 39
console.log("The sum of the numbers is(concatanation):"+3+sum);

// Quick Quiz:

// Prints the content inside A as it is + runs the function 
// But wants to run function only use Arrow Functions
let A=function (a,b){
    a=21;b=23;
    console.log("This is a function assigned to a variable",a,b);
}
console.log(A); 
console.log(A(12,2));  // undefined, but outputs contents in console
console.log(A()); // undefined

function max(a,b){
    return a>b?a:b;
}
let m=max(12,43);
console.log("The max is:",m);

function min(a,b){
    return a<b?a:b;
}
let mi=min(12,43);
console.log("The min is:",mi);