// const prompt=require('prompt-sync')();
/*
1) $0 - used as a reference to access to any element 
2) $1 - use to access the element previous to the referred element

Siblings are the children of the same parent.
<head> & <body> are the siblings 
1) <head> is a "next" or right sibling of body.
2) <body> is a "previous" or "left" sibling of head.

$0.nextSibling
*/
console.log(document.body.firstChild);
console.log(document.body.childNodes);
let a=document.body.firstChild;

/*
element.parentNode- will only return if it is a node in case 
of comment node, text node as well.

element.parentElement- will only return for a valid html element.
e.g head otherwise null

document.documentElement.parentNode;
document.documentElement.parentElement;
*/
console.log(a.parentNode);
console.log(a.parentElement);

console.log(a.firstChild.nextSibling);