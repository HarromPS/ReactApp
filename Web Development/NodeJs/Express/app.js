// npm init
// npm install nodemon
// npm install express
// nodemon app.js (for development)
// node app.js  (for production)

// Creating an express app
const express = require("express");
const app = express();

const port = 80;
const hostname = "127.0.0.1";

// creating an express app when "/" is requested
app.get("/", (request, response) => {
    response.status(200).send("Hello This is an express app");
});

// serving static files
// static files => public files can be downloaded without login or visit the website if get link
app.use("/static", express.static("static"));

// set up template engine(helps in transforming template file contents in HTML)
app.set("view engine", "pug");

let path = require("path");
// set the template/view/folder
app.set("views", path.join(__dirname, "views"));

// template engine endpoint
app.get("/demo", (request, response) => {
    response.status(200).render(
        "demo",
        {
            title: "Hello",
            message: "This is a message"
        }
    );
})

// listening the responses from the port
app.listen(port, () => {
    console.log(`Successfully started ${port}`);
});