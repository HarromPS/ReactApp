package chapter_01;

import java.util.Scanner;

class _3psetQ_1234 {

    public static void main(String[] args) {

        // Practice Set 01:
        // Q1 Write a program to sum three numbers in java.

        int num1, num2, num3;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter first number: ");
        num1 = input.nextInt();

        System.out.print("Enter second number: ");
        num2 = input.nextInt();

        System.out.print("Enter third number: ");
        num3 = input.nextInt();

        int sum = num1 + num2 + num3;
        System.out.println(("The sum of three numbers is: "));
        System.out.println(sum);

        // Q2 WAP to calculate the GPA using marks out of 100
        float sub1, sub2, sub3;
        System.out.print("Enter 1 subject marks: ");
        sub1 = input.nextFloat();
        System.out.print("Enter 2 subject marks: ");
        sub2 = input.nextFloat();
        System.out.print("Enter 3 subject marks: ");
        sub3 = input.nextFloat();
        System.out.println(("The GPA is: "));
        System.out.println(((sub1 + sub2 + sub3) / 300) * 100);

        // 3) WAP and ask the user its name & give greet "Hello
        // <name>, have a good day.
        String name;
        System.out.print("Enter your name: ");
        name = input.next();

        /* To concatenate two strings */
        System.out.println("Hello " + name + ", have a nice day.");
        // System.out.print("Hello ");
        // System.out.print(name);
        // System.out.println(", have a good day.");

        // 4) WAP to convert kilometers in miles
        System.out.print("Enter kilometers: ");
        float km = input.nextFloat();
        System.out.print(km);
        System.out.print(" km= ");
        System.out.print(0.621 * km);
        System.out.println(" Miles");
        
        input.close();
    }
}