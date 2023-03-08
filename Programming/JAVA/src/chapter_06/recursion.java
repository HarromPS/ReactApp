package chapter_06;
import java.util.Scanner;

public class recursion {
    // Recursive Approach
    static public int factorial(int n)
    {
        if(n==0 || n==1){
            return 1;
        }
        else {
            return n* factorial(n-1);
        }
    }

    static public int fibonacci(int n)
    {
        if(n==0 || n==1){
            return n;
        }
        else {
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }

    // Iterative Approach
    static public int fact(int n)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        int Fact=1;
        for(int i=1;i<=n;i++)
        {
            Fact*=i;
        }
        return Fact;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        // Recursion -> method calling itself

        // main(args);

        // main function calling itself 
        System.out.print("Enter a number: ");
        int n=input.nextInt();
        System.out.println("The factorial of "+n+" = "+factorial(n));
        System.out.println("The factorial of "+n+" = "+fact(n));

        System.out.println("The fibonacci Series is given by");
        for(int i=0;i<n;i++)
        {
            int x=fibonacci(i);
            System.out.print(x+" ");
        }
        System.out.println("...");
        input.close();
    }
}
