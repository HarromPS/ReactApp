package chapter_11;

import java.util.Scanner;
import java.lang.Exception;

class ExceptionClass1 extends Exception {

    @Override
    public String toString() {
        return super.toString();
    }

    @Override
    public String getMessage() {
        return null;
    }

    public String InvalidInputException() {
        return "---------Please enter a valid input---------";
    }

    public String maxInputException() {
        return "---------Maximum Input length Reached '100000'---------";
    }

    public String divideByZero() {
        return "---------Division by Zero Exception---------";
    }

    public String maxMultiplicationReachedException() {
        return "---------Maximum Multiplication Reached ---------";
    }
};

class Calculator143 {
    int a, b;

    public Scanner input=new Scanner(System.in);

    public void setValues() throws ExceptionClass1 {
        try{
        System.out.print("Enter 1st value: ");
        int a = input.nextInt();
        System.out.print("Enter 2nd value: ");
        int b = input.nextInt();
        if(a>100000 || b>100000){
            throw new ExceptionClass1();
        }
        else{
            this.a = a;
            this.b = b;
        }
        }
        catch(ExceptionClass1 e)
        {
            System.out.println(e.maxInputException());
        }
        
    }

    public void addition() {
        System.out.println("Addition: " + (this.a + this.b));
    }

    public void substraction() {
        System.out.println("Substraction: " + (this.a - this.b));
    }

    public void multiplication() {
        System.out.println("Multiplication: " + (this.a * this.b));
    }

    public void division() {
        System.out.println("Division: " + (this.a / this.b));
    }
};

public class exercise_06 {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        /*
         * Exercise: Create a calculator which following operations:
         * 1) addition
         * 2) substraction
         * 3) multiplication
         * 4) division
         * which throws the following exception
         * 1) invalid input Exception e.g 8 & 9
         * 2) cannot divide by zero
         * 3) max input Exception if any inputs is greater than 100000
         * 4) max multiplication reached Exception
         */

        Calculator143 c = new Calculator143();
        try {
            c.setValues();
        } catch (ExceptionClass1 e) {
            System.out.println(e.InvalidInputException());
        }

        System.out.println("Enter your choice ");
        System.out.println("1) Add");
        System.out.println("2) Sub");
        System.out.println("3) Multiply");
        System.out.print("4) Divide\n==>");

        int x = input.nextInt();
        switch (x) {
            case 1 -> {
                try {
                    c.addition();
                } catch (Exception e) {
                    System.out.println(e.toString());
                }
            }
            case 2 -> {
                try {
                    c.substraction();
                } catch (Exception e) {
                    System.out.println(e.toString());
                }
            }
            case 3 -> {
                try {
                    if (c.a * c.b > 100000){
                        throw new ExceptionClass1();
                    }
                    else {
                        c.multiplication();
                    }
                } catch (ExceptionClass1 e) {
                    System.out.println(e.maxMultiplicationReachedException());
                }
            }
            case 4 -> {
                try {
                    if (c.b == 0) {
                        throw new ExceptionClass1();
                    }else {
                        c.division();
                    }
                } catch (ExceptionClass1 e) {
                    System.out.println(e.divideByZero());
                }
            }
            default -> {
                System.out.println("Program End");
            }
        }
        input.close();
    }
}
