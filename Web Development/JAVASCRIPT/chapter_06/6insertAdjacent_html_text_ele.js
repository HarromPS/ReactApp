// const prompt=require('prompt-sync')();

// 1) Insertion at the Adjacent HTML
// 2) node removal ele.remove();

// Insertion at the Adjacent of any node element
// => it is HTML/text/element
let first=document.getElementsByClassName("N")[0];
console.log(first);
let second=document.getElementsByClassName("N")[2];
console.log(second);

// "beforebegin" =>inserts HTML immediately/just (adjacent) before the begin of that element.
first.insertAdjacentHTML("beforebegin","<div class='container'>This is a para Before Begin 2nd div(outer)</div>");

// "beforeend" =>inserts HTML just (adjacent) before the end of that element
second.insertAdjacentHTML("beforeend","<p>This is a para before end of the element 4th div(inner)</p>");

// "afterbegin"=> inserts HTML adjacent to the given element
let third=document.getElementsByClassName("N")[1];
console.log(third);
third.insertAdjacentHTML("afterbegin","<p>This is a para after the begin of 3rd div(inner)</p>");

// "afterend"=>insert HTML adjacent to the element after the end
let fourth=document.getElementsByClassName("N")[2];
console.log(fourth);
fourth.insertAdjacentHTML("afterend","<p>This is a para at the end of 4th div(outer)</p>");

let app=document.body;
let create=document.createElement("div");
create.innerHTML=`<h3>This is going to be removed from the HTML DOM</h3>`
console.log(create);
// Appending to dom
app.append(create);

// ele.remove();
create.remove();