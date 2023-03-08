package chapter_04;
import java.util.Scanner;

public class psetQ4_5_6 {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);

        // Q4 WAP to find the day of the week given the number (1,2..)
        int day=0;
        System.out.print("Enter the day number: ");
        day=input.nextInt();
        switch(day){
            case 1->{
                System.out.println("Monday");
            }
            case 2->{
                System.out.println("Tuesday");
            }
            case 3->{
                System.out.println("Wednesday");
            }
            case 4->{
                System.out.println("Thursday");
            }
            case 5->{
                System.out.println("Friday");
            }
            case 6->{
                System.out.println("Saturday");
            }
            case 7->{
                System.out.println("Monday");
            }
            default -> {
                System.out.println("Enter a valid input");
            }
        }

        // Q5 WAP to find if a year is entered is a leap year 
        long year;
        int date;
        System.out.print("Enter a year: ");
        year=input.nextLong();
        System.out.print("Enter the last day of February: ");
        date=input.nextInt();
        if((year%4)==0 && date==29){
            System.out.println(year+" is a leap year");
        }
        else{
            System.out.println(year+" is not a leap year");
        }

        // Q6 WAP to find out the type of website URL
        String url;
        System.out.println("Enter the URL=>");
        url=input.next();
        if(url.endsWith(".com")){
            System.out.println("This is an Commercial Website");
        }
        else if(url.endsWith(".org")){
            System.out.println("This is an Organizational website");
        }
        else if(url.endsWith(".in")){
            System.out.println("This is Indian Website");
        }
        else{
            System.out.println("This is "+" website");
        }
        input.close();
    }
}
