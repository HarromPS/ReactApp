package Practice;

import java.util.Scanner;

/* 4 different ways to use a function: 
 * No Parameters & No return types
 * No Parameters & Return types
 * Parameters & No return types
 * Parameters & Return types
 */
public class FunctionTypes {
    static Scanner sc = new Scanner(System.in);

    static void sum() {
        System.out.print("Enter 1st number: ");
        int a = sc.nextInt();
        System.out.print("Enter 2nd number: ");
        int b = sc.nextInt();
        int c = a + b;
        System.out.println("The sum of two numbers is: " + c);
    }

    static int sum1() {
        System.out.print("Enter 1st number: ");
        int a = sc.nextInt();
        System.out.print("Enter 2nd number: ");
        int b = sc.nextInt();
        int c = a + b;
        return c;
    }

    static void sum(int a, int b) {
        int c = a + b;
        System.out.println("The sum of two numbers is: " + c);

    }

    static int sum2(int a,int b) {
        int c = a + b;
        return c;
    }

    public static void main(String[] args) {
        sum();
        int c=sum1();
        System.out.println("Sum: "+c);

        System.out.print("Enter 1st number: ");
        int a = sc.nextInt();
        System.out.print("Enter 2nd number: ");
        int b = sc.nextInt();
        sum(a, b);
        c=sum2(a,b);
        System.out.println("Sum2: "+c);
        sc.close();
    }

}
