package chapter_04;
import java.util.Scanner;

public class else_IfClause {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);

        // else_if clause statements ->nested if else 
        // multiple conditional statements 
        int age=input.nextInt();
        if(age>18){
            System.out.println("You are fresher");
        }
        else if(age>30){
            System.out.println("Your are semi Experienced");
        }
        else if(age>45){
            System.out.println("You are Experienced");
        }
        else{
            System.out.println("Invalid Age");
        }    
        input.close();
    }
}
