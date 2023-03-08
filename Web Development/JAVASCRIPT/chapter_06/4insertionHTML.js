// const prompt=require('prompt-sync')();

// Insertion of elements in HTML DOM using Javascript
let a=document.getElementsByClassName("container")[0];
// let a=document.getElementsByClassName("container");
a.innerHTML=a.innerHTML+`<br><b>Hello World</b>`

// 1) Insertion By creating elements
// ele.createElement(name);

let d = document.createElement('div');
// adding/setting some content to element
d.innerHTML= `<h1>This is a H1 heading</h1>`
// appending to DOM <div> element as Child element
a.appendChild(d);

// both are same
// a.append(d); => appends at the end of the node
// document.append(d);

// to append to the DOM body
document.body.append(d);
console.log(d);

// 2) node.prepend(ele) =>inserts the element at the beginning 
// of the node
d.innerHTML+="This is prepended at the beginning (outer)";
a.prepend(d);

// 3) node.before(ele) =>inserts element before the node
let s=document.createElement("span");
s.innerHTML="This is span & before new div d";
d.before(s);

// 4) node.after(ele) => inserts the element after the node
let m=document.createElement("p");
m.innerHTML="This is a para & after new div d";
d.after(m);

// 5) node.replace(ele) =>replce the element with the given node
m.innerHTML+="<hr><b>new div is replaced</b>";
d.replaceWith(m);