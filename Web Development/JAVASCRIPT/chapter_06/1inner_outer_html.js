// const prompt=require('prompt-sync')();

// 1) console.dir();  ->shows the () element as the JS Object
// consists of methods & functions

// returns the HTML collection with given tag name
console.log(document.getElementsByTagName("span"));
// returns the HTML collection 
console.dir(document.getElementsByTagName("span"));

// returns the first elements of element with Tag Name 'span'
console.log(document.getElementsByTagName("span")[0]);
// returns the object element with its attributes & methods
console.dir(document.getElementsByTagName("span")[0]);

// 2) tagName/nodeName -
// tagName -> used to read tag name of the elements
// nodeName -> can be a element & can be defined for any type 
// of nodes , e.g: text OR comment node

// returns the first element -> comment OR text node
console.log(document.body.firstChild.nodeName);
// returns the first elemen tnode ->
console.log(document.body.firstElementChild.nodeName);

console.log(document.body.getElementsByTagName("span")[0].nodeName);
console.log(document.body.lastElementChild.nodeName);

// innerHTML => contans the contents inside the element 
// ==> gets the String content of the element
console.log(document.getElementById("first"));
// =>span tag
let change=(document.body.getElementsByTagName("span"));
// change=(document.body.getElementsById("first"));
change.innerHTML="Hi I am Writing innerHTML";
console.log(change);

// outerHTML -> contains the full HTML innerHTML + the element itself
change.outerHTML;
console.log(change);
//first.outerHTML
// '<span id="first"><b>Hello </b>This is a span</span>'

change.outerHTML=`<i>This is a outerHTML</i>`;
console.log(change);

// Note: innerHTML is only valid for Element nodes & for 
// other type of nodes(text/comment) we can use ele.nodeValue OR .data
console.log(document.body.firstChild.nodeValue);
console.log(document.body.firstChild.data);