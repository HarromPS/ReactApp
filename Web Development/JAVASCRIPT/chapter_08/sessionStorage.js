// // const prompt=require('prompt-sync')();

// // same as sessionStorage
// Session Event -> to listen the changes/updates in the key,old value,etc
window.onstorage=()=>{
    alert("Changed");
}

// // local storage-> data survives after a full page refresh 
// // or a full browser restart
document.cookie = "key= value";
document.cookie = "key1= value1";

// // Enter key & value
let key = prompt("Enter a key to save to the local storage:");
let value = prompt("Enter a value to your key:");

// // addding key - value to the local storage
sessionStorage.setItem(key, value);

console.log(`This is a key value pair in local storage: ${key}, ${value}`);

// // to get the value of the key
console.log(sessionStorage.getItem(key));

// // to get the key at a given index
console.log(sessionStorage.key(0));
console.log(sessionStorage.key(1));
console.log(sessionStorage.key(2));

// // can also use get & set as an object
sessionStorage.one = 1;
alert(sessionStorage.one);
delete sessionStorage.one;

let obj = {
    rer: "rere"
};

// // to store a object
JSON.stringify(obj);
console.log(obj);
let s="1";
JSON.parse(s);
console.log(s);
console.log(typeof s);
// removing a key value pair
if (key == "one" || key == "two") {
    sessionStorage.removeItem(key);
}

if (key == 0) {
    sessionStorage.clear();
}