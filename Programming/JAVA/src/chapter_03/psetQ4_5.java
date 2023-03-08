package chapter_03;

import java.util.Scanner;

public class psetQ4_5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // Q4 Write a java program to detect double & triple spaces in a string
        // String str = " Hello  ho    are ypur  ";
        // int i = 0,doub=0,triple=0;
        // System.out.println(str.length());
        // while (i < str.length()-3)
        // {
        //     if(str.substring(i,i+3)=="  ")
        //     {
        //         doub++;
        //     }
        //     else if(str.substring(i,i+4)=="   ")
        //     {
        //         triple++;
        //     }
        //     i++;
        // }
        // System.out.println("The double spaces in string is: "+doub);
        // System.out.println("The triple spaces in string is: "+triple);
            String str="This string  contains double space & triple space at   index";
        System.out.println("This string contains double space & triple space at index: ");
        System.out.print(str.indexOf("  ")+", ");
        System.out.println(str.indexOf("   "));

        // Q5 Write a java program to format the following letter using 
        // escape sequence characters
        System.out.println("\"Dear Boy, This is Nice, Thanks\".");
        String letter = "\"Dear Boy,\nThis is Nice,\nThanks\".";
        System.out.println(letter);
        input.close();
    }
}
