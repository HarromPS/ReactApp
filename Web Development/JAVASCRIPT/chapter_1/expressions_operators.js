//Expression & Operators

// Every value written is literally an expression 
// e.g
7;
"Hello";
console.log(!true);

// 1) Arithmetic operators: 
let a = 10, b = 3;
console.log("a + b =", a + b);   // Addition 
console.log("a - b =", a - b);   // Substrction
console.log("a * b =", a * b);    // Multiplication
console.log("a / b =", a / b);    // Division
console.log("a % b =", a % b);    // Modulus-remainder
console.log("a ** b (a^b) =", a ** b); // Exponential
console.log("a++ (Pre Incerment) =", a++);   // "a=10" then a+1 , a=11
console.log("++a (Post Incerment) =", ++a);  // a=11, a+1 , "a=12"
console.log("a-- (Pre Decrement) =", a--);   // "a=12" then a-1 , a=11
console.log("--a (Post Decrement) =", --a);  // a=11, a-1 ,then "a=10"
console.log();  // New Line
// 2) Assignment Operators
b = 8;

console.log("a=2*b: ", a = 2 * b);   // a=b
a = 9;
console.log("a+=b:", a += b); // a=a+b
console.log("a-=b:", a -= b); // a=a-b
console.log("a*=b:", a *= b); // a=a*b
console.log("a/=b:", a /= b); // a=a/b
console.log("a%=b:", a %= b); // a=a%b
console.log("a**=b:", a **= b); // a=a**b
console.log();

// Comparison Operators
let comp1 = 6, comp2 = "6";
console.log("comp1  == comp2:", comp1 == comp2);
console.log("comp1 != comp2:", comp1 != comp2);
console.log("comp1 === comp2:", comp1 === comp2);
console.log("comp1 !== comp2:", comp1 !== comp2);
console.log("comp1 > comp2:", comp1 > comp2);
console.log("comp1 < comp2:", comp1 < comp2);
console.log("comp1 >= comp2:", comp1 >= comp2);
console.log("comp1 <= comp2:", comp1 <= comp2);
console.log();

// 4) Logical Operator
let x=5, y=6;
console.log("x<y && x==5:",x<y && x==5);
console.log("x>y || x==5:",x>y || x==5);
console.log("!false:",!false," !true:",!true);
console.log();

// 5) Bitwise Operators
let A=5; B=1;
console.log("A & B:",A&B);
console.log("A | B:",A|B);
console.log("~A, ~B:",~A,~B);
console.log("A << B:",A<<B);
console.log("A >> B:",A>>B);

// Comments
// This is a Single Line Comment 
/* This is a Multi Line Comment */