// const prompt=require('prompt-sync')();
// Alert, Prompt & Confirm console object methods
// used for the interaction with the user 
alert("Writ here");

// Use doument.write() in backend & not in the console
// [Violation] Avoid using document.write()

// ALERT() AND PROMPT()
// alert("Writ here");
// let a=prompt("Enter the value: ");
// document.write();

// alert("Writ here");
// let a=prompt("Enter the value: ");
// alert("you entered a value of "+ (typeof a));

// alert("Writ here");
// let a=prompt("Enter the value: ");
// a=Number.parseInt(a);
// alert("you entered a value of "+ (typeof a));
// alert("Writ here");

// DEFAULT VALUE IN PROMPT 
// let a=prompt("Enter the value: ","7");
// a=Number.parseInt(a);
// alert("you entered a value of "+ (typeof a));
// document.write(a);

// confirm()- returns if the user chooser OK or returns false if chooses
// cancel
let a = prompt("Enter the value: ", "7");
a = Number.parseInt(a);
alert("you entered a value of " + (typeof a));
let write = confirm("Do you want to write the value to the page", a);
if (write) {
    document.write(a);
}
else {
    document.write("Please allow me to write");
}
