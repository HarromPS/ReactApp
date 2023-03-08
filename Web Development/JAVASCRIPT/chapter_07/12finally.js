// const prompt=require('prompt-sync')();
/*
finally -> additional block for try for-catch
=> if there is return in try block, finally will execute just before 
the control return from try to outer code.
*/
function This(params) {


    try {
        let a = 10;
        console.lo(a + ": this is a value of a");
        console.log("Program ran successfully");

        // finally runs just before return statement
        return ;
    }
    catch (error) {
        console.log("There is an error " + error);
        console.log("error");
    }
    // for final cleanup
    // runs just before any return
    finally {
        // exit the loop
        // write to log file
        // close the file
        console.log("Finally executes always");
    }
}

This();
console.log("After function call");