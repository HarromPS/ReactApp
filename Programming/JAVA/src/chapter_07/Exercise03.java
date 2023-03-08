package chapter_07;

import java.util.Scanner;
import java.util.Random;

class Game {
    int user, randOm;
    int noOfGuesses;

    Game() {
        Random rand = new Random();
        randOm = (rand.nextInt(100 - 1 + 1));
    }

    public int isCorrectNumber(int user) {
        if (user == randOm) {
            return 1;
        } else if (user < randOm) {
            return 2;
        }
        return 3;
    }

    public void takeUserInput() {
        Scanner input = new Scanner(System.in);
        int i = 0;
        System.out.print("Guess the number: ");
        while (i != 10) {
            user = input.nextInt();
            System.out.println();

            noOfGuesses++;
            if (isCorrectNumber(user) == 1) {
                System.out
                        .println("________Congratulations__________\nYou found the hidden number in " + setter() + " guesses");
                break;
            } else if (isCorrectNumber(user) == 2) {
                System.out.println("Chance remaining: " + (10 - i - 1));
                System.out.println("Your Number is lesser than hidden number");
                System.out.print("Enter a greater number: ");
            } else {
                System.out.println("Chance remaining: " + (10 - i - 1));
                System.out.println("Your Number is Greater than hidden number");
                System.out.print("Enter a lesser number: ");
            }

            if (i == 10) {
                System.out.println("____________YOU LOSE______________");
                System.out.println("The Hidden number was: " + setter());
                break;
            }
            i++;
        }
        input.close();
    }

    public int setter() {
        return noOfGuesses;
    }

};

public class Exercise03 {
    public static void main(String[] args) {
        /*
         * Create a class game which allow the user to "Play the Number"
         * game once. Game should have the following methods:
         * 1) Constructor to generate the random number
         * 2) takeUserInput() to take the user input
         * 3) isCorrectNumber() to detect whether number entered by the user is true
         * 4) getter & setter for the noOfGuesses
         */

        Game g = new Game();
        g.takeUserInput();
    }
};