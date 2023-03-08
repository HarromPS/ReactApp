package chapter_06;
import java.util.Scanner;

public class psetsMethods {
    static public int multiplication(int n,int i)
    {
        if(i>10)
        {
            return 0;
        }
        else {
            System.out.println(n+" x "+i+" = "+i*n);
            return multiplication(n,i+1);
        }
    }
    // static int i;
    static public void pattern1(int n)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static public void pattern2(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static public void patternQ4(int n)
    {
        if(n>0)
        {
            patternQ4(n-1);
            for(int i=0;i<n;i++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static public void patternQ2(int n)
    {
        if(n>0)
        {
            for(int i=0;i<n;i++)
            {
                System.out.print("*");
            }
            System.out.println();
            patternQ2(n-1);
        }
    }

    static public int naturalSum(int n,int i)
    {
        if(i==0)
        {
            return n;
        }
        else{
            return n+naturalSum(n-1, --i);
        }
    }
    static public int naturalSum2(int n)
    {
        if(n==0)
        {
            return n;
        }
        else{
            return n+naturalSum2(n-1);
        }
    }
    static public int naturalSum3(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        return sum;
    }
    static public int fibonacci1(int n)
    {
        if(n==0 || n==1)
        {
            return n;
        }
        else{
            return fibonacci1(n-1)+fibonacci1(n-2);
        }
    }
    static public int fibonacci2(int n)
    {
        if(n==1 || n==2)
        {
            return n-1;
        }
        else{
            return fibonacci2(n-1)+fibonacci2(n-2);
        }
    }

    // varargs
    static public float Avg(int ...arr)
    {
        int avg=0;
        for(int i:arr){
            avg=avg+i;
        }
        return (float)avg/arr.length;
    }

    static public float toFahrenheit(float c)
    {
        float f=(c*1.8f)+32f;
        return f;
    }
    static public float toCelcius(float f)
    {
        float c=(f-32)*0.56f;
        return c;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        // Q1 WAP in java to print the multiplication table of a
        // number
        System.out.print("Enter a number: ");
        int n=input.nextInt();
        multiplication(n, 1);

        // Q2 WAP in java using functions to print the pattern
        pattern1(n);

        // Q3 Write a recursive function to calculate the sum 
        // of n natural numbers
        // int sum=naturalSum(n,n);
        // int sum=naturalSum2(n);

        // Q10 Iterative approach
        int sum=naturalSum3(n);
        System.out.println("The sum of "+n+" natural number is: "+sum);

        // Q4 WAP in java to print the pattern
        pattern2(n);

        // Q5 WAP in java to print the nth term of fibonacci series
        // take 1st term as 1
        int nthTerm=fibonacci1(n);
        System.out.println("The "+n+"th term of the fibonacci series is: "+nthTerm);
        nthTerm=fibonacci2(n);
        System.out.println("The "+n+"th term of the fibonacci series is: "+nthTerm);
        
        // Q6 WAP to find the avg of set of numbers pased as arguments 
        float avg=Avg(1,2,34,5,7);
        System.out.println("The average of the arguments passed is: "+avg);

        // Q7 Repeat Q4 using recursion
        patternQ4(n);
        // Q8 Repeat Q2 using recursion
        patternQ2(n);

        // Q9 WAP tp convert celcius to fahrenheit
        float x=toFahrenheit(23);
        System.out.println("The conversion to fahrenheit is: "+x+" Df");
        x=toCelcius(300);
        System.out.println("The conversion to celcius is: "+x+" Dc");
        
        input.close();
    }
}
