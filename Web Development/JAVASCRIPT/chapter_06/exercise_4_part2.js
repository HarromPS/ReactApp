// const prompt=require('prompt-sync')();

// Create a digital clock using setInterval & Data object in javaScript.
// The data object can be used to get the data time, hours & seconds 
// can the clock be updated using setInterval.


// function for the clock to get the update every sec

function clock() {
    // using inner.HTML to set the new date every second to the DOM
    let object = new Date();
    let day=object.getDay();
    let date = object.getDate();
    let hrs = object.getHours();
    let min = object.getMinutes();
    let sec = object.getSeconds();
    let mon=object.getMonth();
    let yrs=object.getFullYear();

    // Every second the time(date, hours, minutes, seconds) gets updated
    // console.log(day, hrs, min, sec);
    // console.log(mon+1,yrs);
    mon+=1;
    if(hrs>12){
        hrs=hrs-12;
    }
    if(mon+1<10){
        mon="0"+mon;
    }
    if(date<10){
        date="0"+date;
    }
    if(hrs<10){
        hrs="0"+hrs;
    }
    if(sec<10){
        sec="0"+sec;
    }
    let ele = document.getElementById("clock");
    // appending method
    ele.innerHTML=hrs+":"+min+":"+sec+"<hr>"+""+day+date+"/"+(mon)+"/"+yrs;

    let options={
        weekday:"long",year:"numeric",month:"short",
        day:"numeric",hour:"2-digit",minute:"2-digit"
    };
    let d=object.toLocaleTimeString("en-us",options);
    ele.innerHTML=d;
    ele.style.color="orange";
    ele.style.backgroundColor="black";
    ele.style.borderStyle="";
    // console.log(ele);
    // let a=document.getElementById("clock");
	// a.style.color="lightBlue";
	// a.innerHTML = currentTime;
}

// calling the function
clock();
console.log("hello");
// calling setInterval funtion to run after every 'T'(1000ms) seconds
// call setInterval with just function name & not including any 
// empty parameter if the funstion is alerady defined
setInterval(clock,1000);