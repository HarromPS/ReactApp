package Practice;

import java.util.Scanner;
import java.lang.Math;

public class Allow {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int sum = 0;
        for (int i = 0; i < t; i++) {            
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            sum = 0;
            sum=a+sum;
            for (int j = 0; j < n; j++) {
                int p = (int) Math.pow(2, j) * b;
                sum = sum + p;
                System.out.print(sum + " ");
            }
            System.out.println();

        }
        in.close();
    }
};
