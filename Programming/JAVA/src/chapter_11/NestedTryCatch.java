package chapter_11;

import java.util.Scanner;

public class NestedTryCatch {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int marks[] = new int[3];
        marks[0] = 12;
        marks[2] = 12;
        marks[1] = 1;
        System.out.print("Enter a number ");
        int i = input.nextInt();

        try {
            System.out.println("Value at index is: " + marks[i]);
            // Nested try catch i.e catch inside catch

            // if above try entered then try for this
            try {
                System.out.println("Also value at index-1 is: " + marks[i - 1]);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Free memory " + e);

            }
        } catch (Exception e) {
            System.out.println("Some error occured");
        }

        // Quick Quiz:
        /*
         * WAP in java that allows the user to keep accessing an array until a valid
         * index is given by the user
         */
        int arr[] = new int[1];
        System.out.println("Enter array element: ");

        try {
            for (int j = 0; j < 2; j++) {
                System.out.print(j + 1 + ": ");
                arr[j] = input.nextInt();
            }
            try {
                for (int j = 0; j < 1; j++) {
                    System.out.print(arr[j]);
                }
            } catch (Exception e) {
                System.out.println("Some error occured");
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array out of bounds");
        }

        input.close();
    };
}
