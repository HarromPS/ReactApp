package chapter_05;
import java.util.Scanner;

public class PsetQs {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        // Q1 WAP tp print the pattern
        // int n;
        // System.out.print("Enter your input: ");
        // n=input.nextInt();
        // for(int i=n;i>0;i--)
        // {
        //     for(int j=0;j<i;j++)
        //     {
        //     System.out.print("*");
        //     }
        //     System.out.println();
        // }

        // // Q2 WAP to sum the first even natural numbers using while loop
        // int sum=0;
        // int y,x=0;
        // System.out.print("Enter your number: ");
        // y=input.nextInt();
        // System.out.println("The sum in O(1) time: "+(y*(y-1)));
        // while(x<y)
        // {
        //     sum=sum+2*x;
        //     x++;
        // }
        // System.out.println("The sum of first even natural number is: "+sum);

        // // Q3 WAP to print the multiplication of a given number
        // int y1;
        // System.out.print("Enter your number: ");
        // y1=input.nextInt();
        // for(int i=0;i<10;i++)
        // {
        //     // System.out.println(y1+" X "+(i+1)+" = "+(y1*(i+1)));
        //     System.out.printf("%d X %d = %d\n",y1,i+1,y1*(i+1));
        // }
        // // Q4 WAP to print the multiplication table of a given numeber in reverse order
        // for(int i=10;i>0;i--)
        // {
        //     System.out.printf("%d X %d = %d\n",y1,i,y1*(i));
        // }

        // // Q4 Factorial of a given number using for loop
        // int fact=1,a;
        // System.out.print("Enter a number to find its factorial: ");
        // a=input.nextInt();
        // for(int i=a;i>0;i--)
        // {
        //     fact=fact*i;
        // }
        // System.out.println("The factorial is: "+fact);

        // // Q6 Repeat 5 using while loop
        // int m=1;
        // fact=1;
        // System.out.println("Factorial using while loop");
        // while(m<=a)
        // {
        //     fact*=m;
        //     m++;
        // }
        // System.out.println("The factorial is: "+fact);

        // Q7 Repeat Q1 using while loop
        int i1=0,j1=0;
        int n;
        System.out.print("Enter your input: ");
        n=input.nextInt();
        j1=n;
        while(i1<n)
        {
            j1=n-i1+1;
            while(j1>1)
            {
                System.out.print("*");
                j1--;
            }
            System.out.println();
            i1++;
        }

        // Q8 What can be done using one type of loop, can also be done using
        // the other loop - True or False
        // => True

        // Q9 WAP to find the sum of the numbers occuring in the multipication table 
        // of 8.
        int sum=0;
        for (int i=0;i<10;i++)
        {
            sum+=(8*(i+1));
        }
        System.out.println("The sum of the numbers occuring in the table of 8 is: "+sum);

        // Q10 A do while loop is executed : at least once, at least twice, most once
        int z=0;
        System.out.println("At most once");
        do{
            z++;
        }while(z<1);
        System.out.println(z);
        z=6;
        System.out.println("At least twice");
        do{
            System.out.println(z);
            z--;
        }while(z>=2);
        z=6;
        System.out.println("At least once");
        do{
            System.out.println(z);
            z--;
        }while(z>=1);
        input.close();
    }
}
