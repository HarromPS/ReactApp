package chapter_11;

import java.util.Scanner;
import java.lang.Math;

/*
1) throw keyword-> used to throw exceptions explicitly 
by programmer i.e program ends after throwing the exception.

2) throws-> previously indicating OR alert that there can be exception
with this method, etc
 */

class NegativeRadiusException extends Exception {
    @Override
    public String toString() {
        return "Radius cannot be negative";
    }

    @Override
    public String getMessage() {
        return "Check the input values entered";
    }
};

public class Throw_Throws {
    public static Scanner sc = new Scanner(System.in);

    public static int divide(int a, int b) throws ArithmeticException {
        return a / b;
    }

    public static double areaCircle(double r) throws NegativeRadiusException {
        if (r < 0) {
            throw new NegativeRadiusException();
        }
        return Math.PI * r * r;
    }

    public static void main(String[] args) {

        // so we have to use a try catch block to catch the error if exits
        try {
            System.out.print("Type: ");
            int b = Integer.parseInt(sc.nextLine());
            int c = divide(212, b); // throws Exception
            System.out.println("Num: " + 212 + " Den: " + b + " result: " + c);
        } catch (Exception e) {
            System.out.println("Exception " + e);
        }

        // Unhandled exception type NegativeRadiusException
        // double a=areaCircle(-1);

        System.out.print("Enter a double: ");
        double d=Double.parseDouble(sc.nextLine());
        try {
            System.out.print(areaCircle(d));
        } catch (Exception e) {
            System.out.println(e);
            System.out.println(e.getMessage());
        }
        // closing the Scanner class object
        sc.close();
    }
}
