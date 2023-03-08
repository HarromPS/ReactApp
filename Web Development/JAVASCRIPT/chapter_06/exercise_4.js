// // const prompt=require('prompt-sync')();

// // Create a digital clock using setInterval & Data object in javaScript.
// // The data object can be used to get the data time, hours & seconds 
// // can the clock be updated using setInterval.

// let object= new Date();
// let d=object.getDate();
// let hrs=object.getHours();
// let min=object.getMinutes();
// let sec=object.getSeconds();
// console.log(d,hrs,min,sec);

// // let t=setInterval(function(){
//     // alert(object);
// // },1000);

setInterval(showTime, 1000);
function showTime() {
	let time = new Date();
	let day = time.getDay();
	let hour = time.getHours();
	let min = time.getMinutes();
	let sec = time.getSeconds();
	am_pm = "AM";

	if (hour > 12) {
		hour -= 12;
		am_pm = "PM";
	}
	if (hour == 0) {
		hr = 12;
		am_pm = "AM";
	}

	hour = hour < 10 ? "0" + hour : hour;
	min = min < 10 ? "0" + min : min;
	sec = sec < 10 ? "0" + sec : sec;

	let currentTime = day + ":" + hour + ":"
		+ min + ":" + sec + am_pm;
		console.log(currentTime);
	let a=document.getElementById("clock");
	a.style.color="lightBlue";
	a.innerHTML = currentTime;
}
showTime();
console.log("hello");
// let a = document.getElementById("marque");
// a.style.backgroundColor = "lightblue";
// console.log(a);
// console.log(showTime());
