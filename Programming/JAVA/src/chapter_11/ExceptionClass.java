package chapter_11;

import java.util.Scanner;
/*
Exception class: Built in class in java ->
=> Write our own exception
 */

// Syntax:
class CustomExceptionClass extends Exception {
    // Overriden Methods
    @Override
    public String toString() {
        // return super.toString() + " is a toString return";
        return " is a toString return";
    }

    @Override
    public String getMessage() {
        return " is a get message method";
        // return super.getMessage() + " is a get message method";
    }
};

class AgeException extends Exception {
    // Overriden Methods
    @Override
    public String toString() {
        // return super.toString() + " is a toString return";
        return " Age cannot be greater than 125 OR Age cannot be negative";
    }

    @Override
    public String getMessage() {
        return " Check the entered values";
        // return super.getMessage() + " is a get message method";
    }
};

public class ExceptionClass {
    // Declared as static & close at the end of main();
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        int a = input.nextInt();
        if (a < 10) {
            try {
                throw new CustomExceptionClass();
            } catch (Exception e) {
                System.out.println("is a string "+e);
                System.out.println("is a string "+e.toString());
                System.out.println("is a message"+e.getMessage());
                System.out.println("printStackTrace ,BUT NOT ERROR\nException:");
                e.printStackTrace();
            }
        }

        System.out.print("Enter your age: ");
        int age=input.nextInt();
        if(age>125){
            try{
                throw new AgeException();
            }
            catch(Exception e){
                System.out.println(e.toString());
                System.out.println(e.getMessage());
                e.printStackTrace();

            }
        }
        else {
            System.out.println("Age: "+age);
        }
        int a1=12,b=0;
        if(b==0){
            try{
                System.out.println("Throwing an Exception:");
            throw new ArithmeticException("\nDivide by '0'");}
            catch(Exception e){
                System.out.println(e);
            }
        }
        else{
            System.out.println(a1/b);
        }
        input.close();
    }
};
