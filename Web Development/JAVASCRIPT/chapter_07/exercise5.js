// const prompt=require('prompt-sync')();

// Hacker man=> WAP in JS to pretend like a hacker. Write an async
// function which will simply display the following:
/*
    Initializing hacking
    Hacking <name> username
    User name & password found
    connecting facebook account
 */

async function Hacker() {
    let n = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(1);
        }, 1000);
    });
    let n1 = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(1);
        }, 4000);
    });
    let n2 = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(2);
        }, 6000);
    });
    let n3 = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(3);
        }, 7000);
    });
    let n4 = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(4);
        }, 1000);
    });
    let n5 = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(5);
        }, 15000);
    });

    let x = document.getElementsByTagName("body")[0];

    let d = Array.from(document.getElementsByClassName("hacker"));
    d.forEach((element) => {
        // console.log(element);
        element.style.color = "lightgreen";
    });
    let hackerId = document.getElementById("hackerid");
    let a1 = await n;
    // x.style.backgroundColor = "black";
    hackerId.innerHTML += "<p>hacking......initialized\nhost_Detected<p><br>";
    let a2 = await n1;
    hackerId.innerHTML += "<p>Hacking vivo1920 version11.32.3<p><br>";
    let a3 = await n2;
    hackerId.innerHTML += "<p>Username: hariom paswrd: @ded42&8kds<p><br>";
    let a4 = await n3;
    hackerId.innerHTML += "<p>connecting social accounts...<p><br>";
    let a5 = await n4;
    hackerId.innerHTML += "<p>personal details captured<p><br>";
    let a6 = await n5;
    hackerId.innerHTML += "<p>Tracks cleared<p><br>";
    hackerId.innerHTML += "<p>Secured connection<p><br>";
};

const create = async () => {
    return new Promise((resolve, reject) => {
        let ele = document.createElement("span");
        ele.clientWidth = "10px";
        ele.innerHTML+="<p>Hello </p>";
        body.append(ele);
    });
}
create();
let a = async () => {
    let a1 = await Hacker();
    console.log(a1);
}
a();