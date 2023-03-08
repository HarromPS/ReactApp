package chapter_04;

import java.util.Scanner;
import java.util.Random;

public class exercise {
    public static void main(String[] args) {
        // Rock paper scissor
        Scanner input = new Scanner(System.in);
        String user;
        System.out.println("Enter 'r' for rock");
        System.out.println("Enter 'p' for paper");
        System.out.println("Enter 's' for scissor");

        // Cannot make a static reference to the non-static method nextInt(int) from the
        // type Random
        // soln-> create a Random Instance/object as nextInt() is not an static method
        Random rand = new Random();
        // 1=rock, 2=paper, 3=scissor
        int computer;
        int user_score = 0, comp_score = 0;
        for (int i = 0; i < 5; i++) {
            System.out.println("\nRound " + (i + 1));
            System.out.print("Enter=> ");
            user = input.next();
            computer = 1 + (rand.nextInt(3 - 1 + 1));
            if (user.equals("r") && computer == 3) {
                System.out.println("Computer: s");
                user_score++;
            } else if (user.equals("p") && computer == 1) {
                System.out.println("Computer: r");
                user_score++;
            } else if (user.equals("s") && computer == 2) {
                System.out.println("Computer: p");
                user_score++;
            }
            if (user.equals("r") && computer == 2) {
                System.out.println("Computer: p");
                comp_score++;
            } else if (user.equals("p") && computer == 3) {
                System.out.println("Computer: s");
                comp_score++;
            } else if (user.equals("s") && computer == 1) {
                System.out.println("Computer: r");
                comp_score++;
            }
        }

        System.out.println("\nYour Score: " + user_score);
        System.out.println("Computer Score: " + comp_score);
        if (user_score > comp_score) {
            System.out.println("You won");
        } else if (user_score < comp_score) {
            System.out.println("You lose");
        } else {
            System.out.println("Draw");
        }
        input.close();
    }
}
