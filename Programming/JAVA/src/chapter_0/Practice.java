package chapter_0;

import java.util.Scanner;

class practice {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // //Q1 Convert fahrenheit to degree celcius
        // System.out.print("Enter the Farhenheit value: ");
        // float fahrenheit=input.nextFloat();
        // System.out.print("The Celcius Conversion is: ");
        // System.out.println((fahrenheit-32)*0.556F);

        // // Q2 Swap Using third variable
        // System.out.print("Enter first number: ");
        // int a=input.nextInt();
        // System.out.print("Enter second number: ");
        // int b=input.nextInt();
        // System.out.println("Before swapping the values are ");
        // System.out.print("a= "+a);
        // System.out.print(", b= "+b);
        // int temp=a;
        // a=b;
        // b=temp;
        // System.out.println("\nAfter swapping the values are ");
        // System.out.print("a= "+a);
        // System.out.print(", b= "+b);

        // // Q2 Swap without using third variable
        // System.out.print("Enter first number: ");
        // int a=input.nextInt();
        // System.out.print("Enter second number: ");
        // int b=input.nextInt();
        // System.out.println("Before swapping the values are ");
        // System.out.print("a= "+a);
        // System.out.print(", b= "+b);
        // a=a+b;
        // b=a-b;
        // a=a-b;
        // System.out.println("\nAfter swapping the values are ");
        // System.out.print("a= "+a);
        // System.out.print(", b= "+b);

        // // Q4 find largest number in java
        // int a,b,c;
        // System.out.println("Enter three numbers: ");
        // a=input.nextInt();
        // b=input.nextInt();
        // c=input.nextInt();
        // if(a>b && a>c){
        // System.out.println(a+" is the largest number");
        // }
        // else if(c>b && c>a){
        // System.out.println(c+" is the largest number");
        // }
        // else{
        // System.out.println(b+" is the largest number");
        // }

        // // Q5 Check odd & even number
        // System.out.print("Enter a number: ");
        // int x=input.nextInt();
        // if(x%2==0)
        // {
        // System.out.println(x+" is an even number");
        // }
        // else{
        // System.out.println(x+" is an odd number");
        // }

        // Q6 find factorial of a number
        // System.out.print("Enter a number: ");
        // int x=input.nextInt();
        // int y=1;
        // for(int i=x;i>1;i--)
        // {
        // y*=x;
        // x--;
        // }
        // System.out.println("The factorial is: "+y);

        // Q7 Complete two strings
        // System.out.print("Enter a String: ");
        // String str=input.next();
        // System.out.print("Enter another String: ");
        // String str2=input.next();
        // System.out.println("The String is: "+str+str2);

        // // Q8 Print star using loops
        // int x=5;
        // for(int i=0;i<x;i++)
        // {
        // for(int j=x;j>i;j--)
        // {
        // System.out.print("&");
        // }
        // System.out.println();
        // }

        // Q9 Print reverse number using loops using while loops
        // int x=10;
        // System.out.println("The reverse numbers are:");
        // while(x>0)
        // {
        // System.out.print(x+" ");
        // x--;
        // }

        // Q10 Print all alphabets using loops
        // char i=65;
        // System.out.println("The Alphabets are:");
        // while(i<=90)
        // {
        // System.out.print(i+" ");
        // i++;
        // }

        // Q11 Print multilpication table
        // int n;
        // System.out.print("Enter a number: ");
        // n = input.nextInt();
        // for (int i = 0; i < 10; i++) {
        // System.out.println(n + " X " + (i + 1) + " = " + n * (i + 1));
        // }

        // Q12 Print Prime numbers
        // int n;
        // System.out.print("Enter a number: ");
        // n = input.nextInt();
        // int isPrime=1;
        // for (int j = 2; j * j < n; j++) {
        //     if (n % j == 0) {
        //         isPrime = 0;
        //     } else {
        //         isPrime = 1;
        //     }
        // }
        // if (isPrime != 0) {
        //     System.out.println(n + " is an prime number");
        // } else {
        //     System.out.println(n + " is not an prime number");
        // }
        input.close();
    }
};