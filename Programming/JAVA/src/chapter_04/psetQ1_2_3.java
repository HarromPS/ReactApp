package chapter_04;

import java.util.Scanner;

public class psetQ1_2_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Q1 What will be the o/p of the program
        // Ans-> if( a = 11) => will give error mismatched
        // int a = 10;
        // if (a = 11) {
        // System.out.println("I am 11");
        // } else {
        // System.out.println("I am not 11");
        // }

        // Q2 WAP to find if a student is pass or fail if it requires
        // at least 33% marks in each subject. Take 3 subjects as input.
        float m1, m2, m3;
        System.out.print("Enter the marks for 1st subject: ");
        m1 = input.nextInt();
        System.out.print("Enter the marks for 2nd subject: ");
        m2 = input.nextInt();
        System.out.print("Enter the marks for 3rd subject: ");
        m3 = input.nextInt();
        float percentage = ((m1 + m2 + m3) / 300) * 100;
        System.out.println("Your overall percentage is: "+percentage);
        if(percentage > 40)
        {
            if(m1>=33 && m2>=33 && m3>=33)
            {
                System.out.println("You are Pass\n");
            }
            else
            {
            System.out.println("You are failed in one of the subject\nSo you have to reapperar for the exam");
            }
        }
        else{
            System.out.println("You are Fail");
        }

        // Q3 Calculate the tax paid by an employee to the government 
        // as per the slabs mentioned: 
        /*
            Income      Tax
            2.5-5 L      5% 
            5- 10 L      20%
            above 10 L   30%    
        */
        float income,tax=0;
        System.out.println("Enter your Income: ");
        income=input.nextFloat();
        if(income<2.5){
            System.out.println("No tax");
        }
        if(income>2.5 && income<=5.0){
            System.out.print("Your payable tax is: 5%\n");
            tax+=0.05F*(income-2.5F);
        }
        else if(income>5.0 && income<=10.0){
            System.out.print("Your payable tax is: 20%\n");
            tax+=0.05F*(income-2.5F);
            tax+=0.2F*(income-5.0F);
        }
        else if(income>10.0){
            System.out.print("Your payable tax is: 30%\n");
            tax+=0.05F*(income-2.5F);
            tax+=0.2F*(income-5.0F);
            tax+=0.3F*(income-10.0F);
        }
        System.out.println(tax);
        input.close();
    }}
