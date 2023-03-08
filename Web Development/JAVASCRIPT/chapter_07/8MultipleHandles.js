// Attatching multiple handler in a Promise
let p = new Promise((resolve,reject)=>{
    setTimeout(function(){
        console.log("Promise is Pending");
        resolve(1);
    },2000);
});

// multiple handlers
p.then((value)=>{
    console.log("Promise resolved "+value);
});
p.then((value)=>{
    console.log("Handler 2 All at the same time "+value);
})
p.then((value)=>{
    console.log("Handler 3 "+value);
})
p.then((value)=>{
    console.log("Handler 4 "+value);
})
p.then((value)=>{
    console.log("Handler 5 "+value);
})