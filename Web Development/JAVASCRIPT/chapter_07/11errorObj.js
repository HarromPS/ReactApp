// const prompt=require('prompt-sync')();

try {
    // console.log(hello); // hello not defined
    // custom error
    // throw new Error("Hello is not defined......");
}
catch (error) {
    console.log(error); // print error as a console
    console.log(error.name);    //ReferenceError

    //11errorObj.js:7 hello is not defined
    console.log(error.message);
    console.log(error.stack);
}

let age = prompt("Enter age: ");
age = Number.parseInt(age);
// console.log(age);
try {
    if (age < 18) {
        throw new ReferenceError('ErrorFile',12,10,'name','message');
    }
    else if (age > 20 && age < 25) {
        throw new SyntaxError("Syntax error");
    }
}
catch (error) {
    console.log("This is a true/false"+error instanceof ReferenceError);
    console.log("This is a fileName "+error.fileName);
    console.log("This is a lineNumber "+error.lineNumber);
    console.log("This is a coloumnNumber "+error.coloumnNumber);   
    console.log("This is a error name "+error.name);
    console.log("This is a message "+error.message);
    console.log("This is a "+error.stack);
}
console.log("script is running...");