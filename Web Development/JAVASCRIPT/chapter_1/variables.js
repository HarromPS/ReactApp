console.log("This is a line for my javascript code");
// To create a variable we use 'let'
let a = 12;
console.log(a);

// Javascript allow the change in datatype in runtime
a = "Hello World";
console.log(a);

// Rules for choosing a variable name
/*
1) letters, digits, underscores & names are allowed
2) Must begin with a $, _ or a letter.
3) In javascript reserved keywords cannot be used as a variable\.
4) hello & Hello are different variables (case sensitive).
*/

// DIFFERENCE BETWEEN VAR, LET, CONST

var a1 = 34;
var b1 = "Hello";
var c = null;
var d = undefined;
var e = 3;
// Var is globally scoped & can be updated & re-declared within that scope
{
    var b = 32;
    console.log(b);
}
console.log(b);
// But let and const are Blocked scoped
{
    // scoped within this block 
    let b = "World";
    console.log(b);
}
console.log(b);
a=12+12;
console.log(a);
// let can be updated but cannot be re-declared 
// but const can't be updated nor be re-declared
// const must be initialized at the time of declaration
const Home="Wel-Come";
console.log(Home);