// package folder1.folder2.folder3;
// Q3 works perfectly in Windows Powershell
package chapter_09;

// import chapter_09.Access;
import java.util.Scanner;

public class pset_92 {
    public static void main(String[] args) {
        // Q2 Use a built in package in java to write a class
        // which displays a message (by using sout) after taking
        // user input

        Scanner input = new Scanner(System.in);
        System.out.print("Enter a value: ");
        // int i = input.nextInt();
        // Access A = new Access();
        // // print(i);
        input.close();
    }
}