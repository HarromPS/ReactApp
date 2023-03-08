package chapter_01;

import java.util.Scanner;

public class psetQ_5 {
    public static void main(String[] args) {
        // Creating an object of the Scanner class
        Scanner input = new Scanner(System.in);

        // 5) WAP to detect whether entered input is an integer or not
        System.out.println("Type from the keyboard");
        boolean b= input.hasNextInt();
        if(b)
        {
            System.out.println("Entered input is an Integer");
        }
        else{
            System.out.println("Entered input is not an Integer");
        }
        input.close();
    }
}
