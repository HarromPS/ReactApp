package chapter_01;

import java.util.Scanner;

/*
1) Write a program to calculate precentage of a given student in CBSE board
exam. His marks from 5 subjects must be taken as an input from the user
. (Marks are out of 100)
*/
public class exercise_01 {
    public static void main(String[] args) {
        System.out.println("Enter the subject marks for CBSE board exam::");
        Scanner input = new Scanner(System.in);

        int x;
        float eng, math, sci, hindi, history;
        do {
            System.out.print("English: ");
            eng = input.nextFloat();

            System.out.print("Maths: ");
            math = input.nextFloat();

            System.out.print("Science: ");
            sci = input.nextFloat();

            System.out.print("Hindi: ");
            hindi = input.nextFloat();

            System.out.print("History: ");
            history = input.nextFloat();
            float sum = eng + hindi + history + math + sci;
            float avg = (sum / 5);
            float percentage=(sum/500)*100;
            System.out.print("The percentage the student got=> ");
            System.out.println(percentage);
            if (avg < 40) {
                System.out.println("Failed Exam");
            } else {
                System.out.println("Passes Exam\n");
            }
            System.out.println("Do you want to enter for next student Enter 1 else Enter 0");
            x = input.nextInt();
        } while (x != 0);
        input.close();
    }
}
