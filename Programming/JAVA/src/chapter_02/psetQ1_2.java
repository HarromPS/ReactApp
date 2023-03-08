/*  Q1 What will be the output of the following expression
    float a= 7/4*9/2

    Q2 Write a java program to encrypt a grade by adding 8 to it. 
    Decrypt it to show the corret grade
 */
package chapter_02;

public class psetQ1_2 {
    public static void main(String[] args) {
        // Q1
        float a = 7 / 4.0f * 9 / 2.0f;
        /*
          as precenence is same, the expression is evaluated on basis of associativity
          as the numbers are integer so the solution will be an integer if appropriate literals are used then ans will change
          7/4*9/2=> 1st a1=(7/4), 2nd a2=(a1*9), 3rd a3=(a2/2)
          a3=> 4.0
         */
        System.out.println("The output of the expression is: " + a);

        // Q2
        char grade='A';
        // typecasting, char + int = int so casted into character
        grade = (char)(grade+8);
        System.out.println("The encrypted grade is: "+grade);
        grade = (char)((grade-8)%26);
        System.out.println("The decrypted grade is: "+grade);
    }
}
