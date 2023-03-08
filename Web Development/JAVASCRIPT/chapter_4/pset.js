// const prompt=require('prompt-sync')();
// Q1 WAP in JS using a prompt function to take user input of age
// as a value from the user and tell him if he can drive?
// let age=prompt("Enter your age:");
// if(age>=18)
// {
//     alert("You can drive.");
// }
// else if(age<18)
// {
//     alert("You cannot drive.");
// }
// else
// {
//     alert("Enter a valid age");
// }

// Q2 In Que 1 use confirm to ask the user if he wants to see the 
// prompt again.
// function canDrive(x){
//     if(x>18)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
const canDrive=(age)=>{
    return age>18?1:0;
}
const cannotDrive=(age)=>{
    return (age<0)?1:0;
}
// let age = prompt("Enter your age: ");
let x = 2;
// x=Number.parseInt(x);
// while (x != 0) {
//     if (age >= 18) {
//         console.log("You can drive");
//         x = prompt("Do you want the prompt again Press 1 else press 0: ");
//         x = Number.parseInt(x);
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
//     else if (age < 18) {
//         console.log("You cannot drive");
//         x=prompt("Do you want the prompt again Press 1 else press 0: ");
//         x = Number.parseInt(x);
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
// }
// while (x != 0) {
//     if (canDrive(age)) {
//         // console.log("You can drive");
//         alert("You can drive");
//         x = prompt("Do you want the prompt again Press 1 else press 0: ");
//         x = Number.parseInt(x);
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
//     else{
//         // console.log("You cannot drive");
//         alert("You cannot drive");
//         x=prompt("Do you want the prompt again Press 1 else press 0: ");
//         x = Number.parseInt(x);
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
// }
// x=true;
// while (x) {
//     if (canDrive(age)) {
//         // console.log("You can drive");
//         alert("You can drive");
//         x = confirm("Do you want the prompt again Press 1 else press 0: ");
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
//     else{
//         // console.log("You cannot drive");
//         alert("You cannot drive");
//         x=confirm("Do you want the prompt again Press 1 else press 0: ");
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
// }

// Q3 In the above question use console.error to log the error
// if the user age is entered is negative
// x=true;
// while (x) {
//     if (canDrive(age)) {
//         // console.log("You can drive");
//         alert("You can drive");
//         x = confirm("Do you want the prompt again Press 1 else press 0: ");
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
//     else {
//         // console.log("You cannot drive");
//         if(cannotDrive(age))
//         {
//             console.error("You entered a invalid age");
//             break;
//         }
//         alert("You cannot drive");
//         x=confirm("Do you want the prompt again Press 1 else press 0: ");
//         if(x==1)
//         {
//         age = prompt("Enter your age: ");
//         }
//     }
// }

// Q4 WAP in JS to change the url to google if the user enters 
// a number greater than 4 
// let number=prompt("Enter a number");
// number=Number.parseInt(number);
// if(number>4)
// {
//     location.href="https://www.google.co.in";
// }
// else{
//     alert("You entered "+(number));
// }

// Q5 Change the background colour of the page to any colour on 
// user input
let colour=prompt("Enter a colour: ");
document.body.style.background=colour;