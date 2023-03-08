package Practice2;

// public /* package codechef; // don't place package name! */

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        // your code goes here
        int t = sc.nextInt();
        int n = 0;
        int count = 0;
        int k = 0;
        while (t > 0) {
            System.out.print("1: ");
            n = sc.nextInt();
            System.out.print("2: ");
            k = sc.nextInt();
            if (k == 1) {
                System.out.println(n * n);
            }
            count = 0;
            n = n * n;
            if (k != 1) {
                while (n > k) {
                    count++;
                    n /= k;
                }
                System.out.println(count);
            }
            t--;
        }
    }

};
/*
 * You can use this to clear all existing data in the buffer:
 *
 * while(sc.hasNext()) {
 * sc.next();
 * }
 * If you are only doing this to remove the newline (\n) characters from the
 * input, you can use:
 *
 * while(sc.hasNext("\n")) {
 * sc.next();
 * }
 * If the goal is to only read integers and skip any other characters, this
 * would work:
 *
 * while(sc.hasNext() && !sc.hasNextInt()) {
 * sc.next();
 * }
 */