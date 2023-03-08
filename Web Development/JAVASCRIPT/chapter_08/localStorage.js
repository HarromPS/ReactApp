// const prompt=require('prompt-sync')();

// local storage-> data survives after a full page refresh
// or a full browser restart
document.cookie = "key= value";
document.cookie = "key1= value1";

// Enter key & value
let key = prompt("Enter a key to save to the local storage:");
let value = prompt("Enter a value to your key:");

// addding key - value to the local storage
localStorage.setItem(key, value);

console.log(`This is a key value pair in local storage: ${key}, ${value}`);

// to get the value of the key
console.log(localStorage.getItem(key));

// to get the key at a given index
console.log(localStorage.key(0));
console.log(localStorage.key(1));
console.log(localStorage.key(2));

// can also use get & set as an object
localStorage.one = 1;
alert(localStorage.one);
delete localStorage.one;

let obj = {
    rer: "rere"
};

// to store a object
JSON.stringify(obj);
console.log(obj);
let s = "1";
JSON.parse(s);
console.log(s);
console.log(typeof s);
// removing a key value pair
if (key == "one" || key == "two") {
    localStorage.removeItem(key);
}

if (key == 0) {
    localStorage.clear();
}