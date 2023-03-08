// const prompt=require('prompt-sync')();

// Q1 Use a free api from the internet & feed your api with
// live data;

let nav_link=Array.from(document.getElementsByClassName("nav-link"));
for(let i=0;i<nav_link.length;i++){
    if(i==0){
        nav_link[i].style.backgroundColor="orange";
    }
    else if(i==1){
        nav_link[i].style.backgroundColor="lightBlue";
    }
    else if(i%2==0){
        nav_link[i].style.backgroundColor="green";
    }
    else if(i%3==0){
        nav_link[i].style.backgroundColor="pink";
    }

}
let number=42;
let promise=fetch(`https://api.sunrise-sunset.org/json?lat=36.7201600&lng=-4.4203400`);
promise.then((value)=>{
    console.log(value);
    return value.json();
}).then((value)=>{
    // console.log(typeof value);
    // console.log(value);
    let ihtml="";
    let i=0;
    for(i in value){
        // console.log(typeof i);
        console.log(value);
        console.log(value[i].sunrise);
        let sunrise=value[i].sunrise;
        let sunset=value[i].sunset;
        let day_length=value[i].day_length;
        ihtml+=`
        <div class="card-body"  style="width: 18rem;" border="2px" >
        <h5 class="card-title">Sun Time</h5>
         <img id="thisImg" src="https://th.bing.com/th/id/OIP.ijM3-prK9RLxaoYT7eUbaQHaE8?w=268&h=180&c=7&r=0&o=5&dpr=1.2&pid=1.7" alt="...">
        <p class="card-text">Sun Rise at: ${sunrise}</p>
        <p class="card-text">Sun Set at: ${sunset}</p>
        <p class="card-text">Day Length: ${day_length}</p>
        <a href="https://sunrise-sunset.org/api" target="_blank" class="btn btn-primary">lets Go somewhere</a>
      </div>
        `;

        let a1=document.getElementById("cardContainer");
        a1.innerHTML+=ihtml;
    }
})

