// const prompt = require('prompt-sync')();
/*
Use JS to create a game of snake water gun. This game should
asks you to enter S, G, W. The computer should be able to 
randomly generate s,g,w, & declare win or lose using alert
Use confirm and prompt whatever required.
*/


let num;
// console.log(num);
let s_scr = 0, w_scr = 0, g_scr = 0;
let user;
// let x=true;
// let x=1;
user = prompt("Enter 's' for snake 'g' for gun 'w' for water: ");
num = Math.floor((Math.random() * 3) + 1);
if(user=='s' && num==1)
{
    // console.log("Draw");
    alert("Draw");
}
else if(user=='w' && num==2)
{
    // console.log("Draw");
    alert("Draw");
}
else if(user=='g' && num==3)
{
    // console.log("Draw");
    alert("Draw");
}
else if(user == 's' && num == 2) {
    // console.log("Computer choose water")
    // console.log("You win");
    alert("Computer choose water")
    alert("You win");
}
else if(user == 's' && num == 3) {
    // console.log("Computer choose gun")
    // console.log("You lost");
    alert("Computer choose gun")
    alert("You lost");
}
else if(user == 'w' && num == 1) {
    // console.log("Computer choose snake")
    // console.log("You lost");
    alert("Computer choose snake")
    alert("You lost");
}
else if(user == 'w' && num == 3) {
    // console.log("Computer choose gun")
    // console.log("You Win");
    alert("Computer choose gun")
    alert("You Win");
    
}
else if(user == 'g' && num == 1) {
    // console.log("Computer choose snake")
    // console.log("You win");
    alert("Computer choose snake")
    alert("You win");
}
else if(user == 'g' && num == 2) {
    // console.log("Computer choose water")
    // console.log("You lost");
    alert("Computer choose water")
    alert("You lost");
    
}
// if (win(user, num) == 1) {
    
// }
// else if (win(user, num) == 2) {
//     w_scr++;
// }
// else if (win(user, num) == 3) {
//     g_scr++;
// }
// while(x!=0)
// {
//     user=prompt("Enter 's' for snake 'g' for gun 'w' for water: ");
//     num=Math.floor((Math.random()*3)+1);
//     if(win(user,num)==1)
//     {
//         s_scr++;
//     }
//     else if(win(user,num)==2)
//     {
//         w_scr++;
//     }
//     else if(win(user,num)==3)
//     {
//         g_scr++;
//     }
//     x=prompt("Do you want continue press 1 else 0: ");
//     // x=confirm("Do you want continue");
// }
// if(s_scr>w_scr && s_>g_scr)
// {
//     // alert("The highest score gained is by snake");
//     console.log("The highest score gained is by snake");
// }
// else if(s_scr<w_scr && g_scr<w_scr)
// {
//     // alert("The highest score gained is by water");
//     console.log("The highest score gained is by water");
// }
// else if(g_scr>s_scr && g_scr>w_scr)
// {
//     // alert("The highest score gained is by gun");
//     console.log("The highest score gained is by gun");
// }

// const increase=(num)=>
// {
//     return num++;
// }
// let num=0;
// num=increase(num);
// console.log(num);