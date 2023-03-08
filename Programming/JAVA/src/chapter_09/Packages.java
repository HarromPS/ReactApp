package chapter_09;
// import chapter_09.Interfaces;    // to reach the subfolders inside a folder

// import in classes
// import java.util.Scanner;   // imports only the Scanner class
// import java.util.*; // imports every class from java.util

public class Packages {
    public static void main(String[] args){

        // more way to use classes
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter input: ");
        int a=sc.nextInt();

        // Interfaces i =new Interfaces();
        System.out.println(a);
        sc.close();
    }   
}
