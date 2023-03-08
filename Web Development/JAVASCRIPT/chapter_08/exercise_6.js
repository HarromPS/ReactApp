// const prompt=require('prompt-sync')();

/* Create a to do list app capable of storing the todos in localStorage.
   Add an option to create, delete and access a TODOs
*/
//let adder=document.createElement("table");
// localStorage.clear();
let a = document.getElementById("table");
a.style.textAlign = "center";
for (let i = 0; i < 10; i++) {
   let c = confirm("Do you want to make a note");
   if (c == true) {
      let ky = prompt("Enter a key");
      let val = prompt("Enter a val");
      localStorage.setItem(ky, val);
   }
   else {
      break;
   }
}

let x = confirm("Do you want to see the list");
if (x == true) {
   let len = localStorage.length;
   for (let j = 0; j < len; j++) {
      a.innerHTML += `<tr> <td> ${j}</td> <td> ${localStorage.key(j)}</td> <td> ${localStorage.getItem(localStorage.key(j))}</td> </tr>`;
   }
}

let del=document.getElementById("key2");
del.onclick=(console.log("NME"));
// localStorage.clear();

// a.innerHTML+="<tr> <td>2</td> <td>is</td> <td>a</td> </tr>";

// console.log("Hello");