// const prompt=require('prompt-sync')();
console.log("This is a JavaScript Date & time")

//Syntax: let varName = new Date();
let obj = new Date();
console.log(obj);       // gives the current date & time
console.log(typeof obj);    // object 
// Primitive - number BigInt ,etc
// Reference - array, object 

let date= new Date(1000);   // 1000 ms = 1 sec
// reference from where the constructor took one reference
console.log(date);

// Creating custom date => pass date string yr-mon-day
// let varName = new Date(year,month,date,hours,minutes,seconds,miliseconds);

let cDate=new Date("2022-1-19");
console.log(cDate);

let varName = new Date(2023,1,19,7,26,23);
console.log(varName);

// Methods of Date
let yr = obj.getFullYear();
console.log("This is the year "+yr);

let mon = obj.getMonth();
console.log("This is the month "+mon);

let day = obj.getDay();
console.log("This is the day "+day);

let Date1= obj.getDate();
console.log("This is the date "+Date1);

let hr = obj.getHours();
console.log("This is the hours "+hr);

let min = obj.getMinutes();
console.log("This is the minutes "+min);

let sec = obj.getSeconds();
console.log("This is the seconds "+sec);

// To change/set the date
let change = new Date();
change.setDate(1);
console.log("The changed date "+change);

// if changed date crosses the number of days in the month
// so date changed (>noOfDaysInMonth) - noOfDaysInMonth = difference

change.setDate(54);
// jan(31) => 54-31 = 23
console.log("The changed date "+change);

// Current time stamp => no of milisec passed from the reference
let g = Date.now();
console.log(Date.now()); // returns the time stamp

for(let i=0;i<1000000;i++)
{
    
}

// Difference between the time before the loop runs & after the loop stops
let h= Date.now();
console.log(h-g);

// Setting more times
change.setFullYear(2023);
console.log(change);

// 3 month from now -> april
change.setMonth(3);
console.log(change);

change.setDate(17);
console.log(change);

change.setHours(4);
console.log(change);

change.setMinutes(34);
console.log(change);

change.setSeconds(7);
console.log(change);

change.setMilliseconds(762);
console.log(change);

// Digital clock
function show()
{
    let f = document.getElementById("first");
    let newDate = new Date();
    f.innerHTML = newDate;
}
setInterval(show,1000);