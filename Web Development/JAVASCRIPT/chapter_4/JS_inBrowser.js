// const prompt=require('prompt-sync')();
console.log("Welcome to the Browser mode");
console.info("info");
console.warn("warn");
console.info("error");
console.assert("error" == false);
console.assert("error" != false);

// console.time();
// console.timeEnd(); -- allows a timer in the console for purpose

console.time("forLoop");
for (let i = 0; i < 5; i++) {
    // console.log(i);
}
console.timeEnd("forLoop");

console.time("whileLoop");
let i = 0;
while (i < 5) {
    // console.log(i);
    i++;
}
console.timeEnd("whileLoop");
// console.clear();