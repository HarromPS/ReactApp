// const prompt=require('prompt-sync')();
// OOPs-> Object Oriented Programming

// Prototypes
let obj1 = {
    name: "Hello",
    language: "JavaScript",
    run: () => {
        alert("self run")
    }
};
console.log(obj1);

let obj2 = {
    run: () => {
        alert("run method called");
    }
};

obj1.__proto__=obj2;
console.log(obj1.valueOf());
obj1.run();
obj2.run();
obj1.speed();