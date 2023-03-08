// const prompt=require('prompt-sync')();
//  ele.innerHTML =>used to insert HTML inside the div tag
// Create a website with a div tag containing with a random joke
// Use Math.random & fetch the jokes from the internet.
// The website should show a random joke everytime webpage is loaded
let arr = [`What kind of exercise do lazy people do? Diddly-squats.`,
    `What do you call a pony with a cough? A little horse!`,
    `What is Forrest Gump's password? 1Forrest1.`,
    `Why did the M&M go to school? He wanted to be a Smartie.`,
    `What did one traffic light say to the other? Stop looking at me, I'm changing!`,
    `What do you call bears with no ears? B.`,
    `What's a foot long and slippery? A slipper!`,
    `Why do French people eat snails? They don't like fast food!`,
    `What's red and moves up and down? A tomato in an elevator!`,
    `I invented a new word today: Plagiarism.`,
    `What is sticky and brown? A stick!`,
    `How does a rabbi make coffee? Hebrews it!`,
    `Rest in peace boiling water. You will be mist!`,
    `How do you throw a space party? You planet!`,
    `Want to hear a construction joke? Oh never mind, I'm still working on that one.`,
    `Why don't scientists trust atoms? Because they make up everything!`,
    `I hate Russian dolls… they're so full of themselves!`,
    `Talk is cheap? Have you ever talked to a lawyer?`,
    `Why did the gym close down? It just didn't work out!`,
    `Two artists had an art contest. It ended in a draw!`,
    `A plateau is the highest form of flattery.`,
    `I have a fear of speed bumps. But I am slowly getting over it.`,
    `You can only get spoiled milk from a pampered cow.`,
    `What do you call a boomerang that doesn't come back? A stick!`,
    `You know what I saw today? Everything I looked at.`];
let jokeNo=Math.floor(Math.random()*arr.length);
let replace = document.getElementsByTagName("div")[0].firstElementChild;
replace.innerHTML=arr[jokeNo];
console.log(arr[jokeNo]);