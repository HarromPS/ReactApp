package chapter_11;

import java.util.Scanner;

class ThrowingException extends Exception
{
    @Override
    public String toString(){
        return super.toString();
    }

    @Override
    public String getMessage(){
        return "Invalid input";
    }
};
public class pset_01 {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        // Q1 WAP to demonstrate syntax, logical & runtime error
        // int a=12 --> No semi colon (syntax error)
        // System.out.println(a);

        // int a1 = 2, b1 = 3;
        // for (int i = 0; i < 4; i++) {
        // if(i==3)
        // System.out.println("The addition of two number is "+a1+b1+i);
        // }
        // number are just concatenated & not added

        // char ch;
        // System.out.print("Enter a character: ");
        // ch=input.next();

        // Q2 WAP that prints "HaHa" during Arithmetic Exception & "HeHe"
        // during an illegal argument exception.
        int a = 65, b = 0;
        try {
            int c = a / b;
            System.out.println(c);
        } catch (ArithmeticException error) {
            System.out.println("HaHa");
        } catch (IllegalArgumentException e) {
            System.out.println("HeHe");
        }

        // Q3 WAP that allows you to keep accessing an array until a valid
        // index is given. If max re-tries exceed 5 print "Enter"
        int i = 0, x = 0;
        int arr[] = new int[1];
        while (i <= 4) {
            try {
                System.out.print("Type: ");
                x = input.nextInt();
                i++;
                System.out.println(arr[x]);
            } catch (Exception e) {
                System.out.println("Enter");
            }
           
        }

        // Q4 WAP in Q3 to throw a custom exception if more retires are reached.
        // int[] arr = new int[5];
        // for (int i = 0; i < 6; i++) {
        // try {
        // System.out.print("Type: ");
        // arr[i] = input.nextInt();
        // } catch (Exception e) {
        // System.out.println("Enter a valid input: ");
        // break;
        // }
        // }

        // Q5 WAP a program in Q3 to throw a custom exception inside a method

        // ThrowingException ex=new ThrowingException();
        try{
            throw new ThrowingException();
        }
        catch(Exception e){
            System.out.println(e.toString());
            System.out.println(e.getMessage());
        }
        input.close();
    }
};
