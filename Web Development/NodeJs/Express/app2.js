// require express
const express=require("express");
const fs=require("fs");
console.log("Hello");

// create app
const app=express();
const path=require("path");
const host="127.0.0.1";
const port=80;


// Express related stuffs
app.use("/static",express.static("static"));

// for post request i.e for HTML encoded data
app.use(express.urlencoded());

// Pug related stuffs
app.set("view engine","pug");
app.set("views",path.join(__dirname),"views");

// End Points
let home = fs.readFileSync("static/index.html");
app.get("/",(request,response)=>{
    const title  = "This is a title";
    const content = "This is content of our website";
    const parameters = {
        "title": title,
        "content": content
    };

    response.status(200).render("views/index.pug",parameters);
});

// post request from the website i.e getting the request
app.post("/",(request,response)=>{
    console.log(request.body);
    let name = request.body.name;
    let age = request.body.age;
    let gender = request.body.gender;
    let address= request.body.address;
    let more= request.body.more;

    // response.end(home);

    let outPutMessage=`Name: ${name}\nAge: ${age}\nGender: ${gender}\nAddress: ${address}\nMore: ${more}`;

    // writing to a file
    fs.writeFileSync("output.txt",outPutMessage);
    response.status(200).render("views/index.pug");
});

// start the server
app.listen(port,()=>{
    console.log(`Successfully started at http:${host}:${port}`);
})