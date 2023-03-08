package chapter_01;

// To use Scanner class it has to be imported
import java.util.Scanner;

/*
In order to read from the keyboard java used a Scanner class
Scanner class uses lots of methods to read from the keyboard.

Syntax:
    Scanner sc = new Scanner( System.in ); =>reads from the keyboard

*/
public class _2user_input {
    public static void main(String[] args) {
        // sout = System.out.println(); in vs code
        System.out.println("Taking user input from the user: ");

        // Creating an Scanner class object "sc"
        Scanner sc = new Scanner(System.in);

        // To check if the entered user input is integer
        // boolean b1 = sc.hasNextInt();
        // if (b1 == true) {
        // System.out.println("User input is integer");
        // } else {
        // System.out.println("User input is not an integer");
        // // }

        // System.out.print("Enter first number: ");
        // int a = sc.nextInt();

        // System.out.print("Enter second number: ");
        // int b = sc.nextInt();

        // int sum = a + b;
        // System.out.print("The sum of the two number entered is: ");
        // System.out.println(sum);

        // System.out.print("Enter a floating number: ");
        // float f1 = sc.nextFloat();
        // System.out.println(f1);

        // To take String word -
        // System.out.print("Enter a word: ");
        // String str = sc.next();
        // System.out.println("This is a String word user input");
        // System.out.println(str);

        // To take a sentence as a user input
        System.out.print("Enter a string: ");
        String str1 = sc.nextLine();
        System.out.println("This is a String Sentence user input");
        System.out.println(str1);


        // to resolve the 'enter' buffer 
        System.out.print("Integer: ");
        int x=sc.nextInt();

        // scan the entire line using sc.nextLine()
        sc.nextLine();
        System.out.print("String: ");
        String str=sc.nextLine();
        System.out.println("Integer: "+x+"\nString: "+str);
    
        // Method 2
        int a1;
        for(int i=0;i<5;i++){
            System.out.print(i+1+": ");

            // parses all the integer in a single line as a individual
            // integer
            a1=Integer.parseInt(sc.nextLine());
            System.out.println(a1);
        }
        sc.close();

    }
}
