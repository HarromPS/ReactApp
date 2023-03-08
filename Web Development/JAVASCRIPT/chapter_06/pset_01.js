// const prompt=require('prompt-sync')();

// Q1 Write a program to show different alerts when different button is clicked.
let l = document.getElementById("first").getElementsByTagName("button")[0];
// console.log(l);
let y = 0;

l.onclick = () => {
    if (y == 0) {
        console.log(l);
        l = document.getElementById("first").getElementsByTagName("button")[y];
    }
    else {
        y++;
    }

}
l.addEventListener('click', l);

// Q2 Create a webpage which is capable of storing the bookmarks of your
// favourite website using href.

// Q3 Repeat Q2 using event listener
// Using addEventListener
let m=document.getElementById("google");
m.addEventListener("click",function(){
    window.location = "https://www.google.com";
    window.focus();
})

m=document.getElementById("amazon");
m.addEventListener("click",function(){
    window.location = "https://www.amazon.com";
    window.focus();
})
 m=document.getElementById("oracle");
m.addEventListener("click",function(){
    window.location = "https://www.oracle.com";
    window.focus();
})

// Q4 Write a program to keep fetching the contents of the website (every 5 seconds)
// Fetching the contents of the website

const fetchContent= async (url)=>
{
    con = await fetch(url);
    let a = await con.json();
    return a;
}
let f=setInterval(async function(){
    let url="htps://jsonplaceholder.typicode.com/todos/1";
    console.log(await fetchContent(url));
},5000);
clearInterval(f);

// Q5 Create a glowing bulb effect using classList toggle method in JS
let s=setInterval(function(){
    let z = document.querySelector("#second");
    z.classList.toggle("onBulb");
},500);