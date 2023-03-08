// const prompt=require('prompt-sync')();

// Browser Events -> A signal which tells that something is happend.
// e.g mouse events, keyboard events

// Events can be handled with HTML attributes & 'onclick' property
let a= document.getElementsByClassName("container")[0];

a.onclick=()=>
{
    let b = alert("This is a alert from Javscript");
    console.log(b);
}

// Adding handler with JS overrides the handler of HTML
// handler in JS & 
/*
a.onclick=()=>
{
    let b = alert("This is a alert from Javscript");
    console.log(b);
}
*/
// handler in html (<input onclick="console.log('World');">)

/* addEventLister & removeEventLister */

// ele.addEventLister -> is used to assign multiple handles to an event
// ele.removeEventListener -> removes the Event Listener

let a1 = function(event)
{
    // console.log(event);
    alert("Hello");
}

let b=function(event)
{
    alert("World");//.setTimeout(function(){},2000);
}

let btn = document.getElementById("2");
console.log(btn);
btn.addEventListener('onclick',a1);
btn.addEventListener('click',b);
// let c = prompt("Enter a number : ");
// if(c=="2")
// {
//     // passing the function object to the function
//     btn.removeEventListener('onclick',a1);
//     alert("Hello is removed");
// }
// else {
//     alert(a1);
//     alert(b);
// }

let A = function(E)
{
    console.log(E.target);  
    // gives the target when click its button

    console.log(E); // Pointer event=> Event object

    console.log(E.type);    // type of the event happend (click in this case)

    console.log(E.currentTarget); // current handler
    // In This Case 
    /* <div class="container" id="ID">
        This is a container
        <button onclick="alert('BUTTON'); let a =10; console.log(a);">click me</button>
    </div> */

    console.log(E.clientX); // cordinates of the cursor
    console.log(E.clientY); // cordinates of the cursor

    console.log(E.type, E.currentTarget, E.clientX);
    alert("GO GO GO");
}

let B = function(F)
{
    console.log(F);
    alert("YO YO YO");
}
// console.log(A);
let D= document.getElementById("ID");
D.addEventListener('click',A);

