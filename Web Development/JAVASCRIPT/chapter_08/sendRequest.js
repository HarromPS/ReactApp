// const prompt=require('prompt-sync')();
// POST requests => if the options of the fetch method is empty 
// then the method receive the data

// Options : object
const createTodos = async () => {
    let options = {
        method: "POST",
        headers: {
            "content-type": "application/json"
        },
        body: JSON.stringify({
            title: "hello",
            body: "body",
            userId: 7,
        }),
    };

    let p =await fetch("https://jsonplaceholder.typicode.com/posts", options);
    let response =await p.json();
    return response;
}

const mainFunction=async ()=>{
    let todo=await createTodos();
    console.log(todo);
}

mainFunction();