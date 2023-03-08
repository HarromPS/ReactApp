// const prompt=require('prompt-sync')();
// document.write("Hello");

let user=prompt("Enter 1 to setTimeout for 3 seconds else enter 0");

// Syntax: 
/*
setTimeout(function , <delay_time_in_milisec>, <args1>, <args2>)
*/

const sum = (a, b) => {
    console.log("The sum is: ", (a + b));
    a + b;
}

setTimeout(sum, 1000, 12, 18);

let a = setTimeout(function () {
    alert("This is a Time out");
}, 3000);

if (user) {
    clearTimeout(a);
}
else {
    a = document.getElementById("first");
}
console.log(a);
// To stop/clear the time-out of var 'a'

let a1 = setTimeout(function () {
    alert("This is a TimeOut");
}, 5000);


// setInterval(function, <delay>, <args1>, <args2>);
/*
It runs the functions regularly after a given interval of time
*/

function run()
{
    console.log("This is a setInterval method");
}
let timerId=setInterval(run, 2000, 9, 1);

let t1=setInterval(function(){
    let i=1;
    alert("Interval"+i);
    i++;
},5000);
clearInterval(timerId);
clearInterval(t1);

// setInterval using arguments
const increment=(a)=>
{
    a++;
    console.log("This is a incremented value of "+a);
    
}
let t2=setInterval(increment,4000,1);
console.log(t2);