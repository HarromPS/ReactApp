let user=prompt("Enter S for snake G for gun W for water");
let C=Math.floor(Math.random()*3);
let cpu=["S","W","G"][C];

//user defined function
const match=(cpu,user)=>{
    if(user==="S" && cpu==="W")
    {
        return "user";
    }
    else if(user==="S" && cpu==="G")
    {
        return "cpu";
    }
    else if(user==="G" && cpu==="W")
    {
        return "cpu";
    }
    else if(user==="G" && cpu==="S")
    {
        return "user";
    }
    else if(user==="W" && cpu==="G")
    {
        return "user";
    }
    else if(user==="W" && cpu==="S")
    {
        return "cpu";
    }
    else 
    {
        return "NoOne";
    }
}
let result=(match(user,cpu))
alert(`User: ${user} CPU: ${cpu}\nThe Winner is: ${result.toUpperCase(result)}`);