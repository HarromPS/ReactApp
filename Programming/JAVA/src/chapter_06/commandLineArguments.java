package chapter_06;

public class commandLineArguments {
    public static void main(String[] args){

        // OS supplies/calls the main function 
        // By passing the String Argument it is caught in String[] args array
        
        // In terminal 
        // javac commandLineArguments.java
        // java commandLineArguments

        // java commandLineArguments HELLOWORLD
        // => HELLOWORLD
        System.out.println("The command line arg is: "+args);
    }
}
