// const prompt=require('prompt-sync')();
// Objects in JavaScript

let obj = {
    age: "10"
};
console.log("This is a property of object", obj.age);
console.log("This is a property of object", obj["age"]);
let x = "age";    // expression
console.log("This is a property of object", obj[x]);

let p = {
    // using lambda expression to create a method
    run: () => {
        console.log("This is a method of p object");
    }
};

// function sum(){
//     console.log("This is a sum function");
// }

p.run();
// console.log(p.run);

// obj is referring to object p
obj.__proto__ = p;
// obj.run()=()=>{
//     console.log("Objects are mutable\nmeans any changes in obj.run() will make changes in p.run");
// };

// Nested objects
let object = {
    o1: {
        name: "name",
        style: "hip-hop"
    },
    o2: {
        age: "12"
    }
};
console.log(object.o1.name);
console.log(object.o1.style);
console.log(object.o2.age);

console.log(object["o1"]["name"]);
console.log(object["o1"]["style"]);
console.log(object["o2"]["age"]);
delete object.o1.style;

// Nested Arrays & Objects
let Obj = {
    array: [{ cardNo: 10, arrInd: 12 },
    { bikeModel: [1, 2, 3, 3, 4, 4] }],
};
// accessing the objects
for (let i in Obj) {
    // for (let j in Obj["array"[i]]["bikeModel"]) {
    //     console.log(Obj["array"]["bikeModel"[j]]);
    // }
    for (let j in Obj.array[i].bikeModel) {
        console.log(Obj.array[i].bikeModel[j]);
    }
}