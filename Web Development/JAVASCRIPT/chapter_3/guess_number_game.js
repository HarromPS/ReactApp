const prompt = require('prompt-sync')();
// Exercise questions on JS

// Write a JS program to generate a random number & store it in a variable .
// The program then takes an input from the user to tell if the guess was
// correct , greater or lesser than the original .
// 100 is the score, program should terminate once the number is gussed
// Number should between 1- 100;

// random no - original no
let x = Math.floor((Math.random() * 100) + 1);
// console.log(x);
let no_of_gusses = 0, chances = 10;
let user_input, score = 100;
console.log("\tThis is a Guess The Number Game");
console.log("You have given '10' chances to guess the number");
console.log("Guess between 1 to 100\n");
console.log("Enter a number ==> ");
do {

    user_input = prompt();
    if (user_input > x) {
        console.log("\nYour number is Greater than the Hidden number");
        console.log("Enter again =>");
    }
    else if (user_input < x) {
        console.log("\nYour number is Lesser than the Hidden number");
        console.log("Enter again =>");
    }
    else if (user_input == x) {
        console.log("\n\t\tYOU FOUND THE HIDDEN NUMBER");
        console.log("\t\tThe Hidden number was:'", x, "'");
        console.log("\n\n\t\tYour Score: ", score,"Out of 100");
        break;
    }
    else {
        no_of_gusses++;
    }
    chances--;
    score = score - 10;
    console.log("Chances left: ", chances);
} while ((chances != 0))

if (user_input != x) {
    console.log("\n\t\tThe Hidden number was:", x,);
    console.log("\n\t\t\tYour Score: ", score,"Out of 100");
}


