/*  Q3 Use comparison operator to find out whether a given number is 
    greater than the user entered number of not

    Q4 Write the following expression in a java program (v^2 - u^2)/2as

    Q5 find the value of the following expression
    int a=7*49/7+35/7;
 */

package chapter_02;

import java.util.Scanner;

public class psetQ3_4_5 {
    public static void main(String[] args) {
        // Q3
        Scanner input = new Scanner(System.in);
        int userInput;
        int givenNum = 18;
        System.out.print("Enter a value= ");
        userInput = input.nextInt();
        if (userInput > givenNum) {
            System.out.println("Your number " + userInput + " is greater than given number " + givenNum);
        } else {
            System.out.println("Given number " + givenNum + " is greater than your number " + userInput);
        }
        input.close();

        // Q4 (v^2 - u^2)/2as
        /*
         * (v^2 - u^2)/2as => (v*v) - (u*u) / (2*a*s)
         */
        System.out.println(3 - 2 / 2); // 3-(2/2), 3-1 =>2

        // Q5
        int a = 7 * 49 / 7 + 35 / 7;
        /*  7 * 49 / 7 + 35 / 7 
            => ((7*49)/7) + (35/7)
            => (49)+(5)
            => 54
        */
        System.out.println("The value of a is: "+a);
    }
}
