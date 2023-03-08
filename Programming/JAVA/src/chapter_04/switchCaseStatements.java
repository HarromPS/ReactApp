package chapter_04;

import java.util.Scanner;

/* switch case statements -> are used to make unique choices
between choices
like a menu to choose from
 */
public class switchCaseStatements {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = input.nextInt();

        // switch (int/char/string/float)
        switch (age) {
            case 18:
                System.out.println("You are 18 years old");
                break;
            case 19:
                System.out.println("You are 19 years old");
                break;
            case 20:
                System.out.println("You are 20 years old");
                break;
            default:
                System.out.println("Live your Life");
        }

        // Enhanced Switc case in Java.
        // which case matches the choice it gets executed
        switch(age){
            case 18 -> {
                System.out.println("Case 1");                
            }
            case 19 -> {        
                System.out.println("Case 2");
            }
            case 20 -> {        
                System.out.println("Case 3");
            }
            default -> {
                System.out.println("Default");                
            }
        }
        input.close();
    }
}
