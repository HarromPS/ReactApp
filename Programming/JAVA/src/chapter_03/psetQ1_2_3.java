package chapter_03;
import java.util.Scanner;

public class psetQ1_2_3 {
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        // Q1 Write a java program to convert a string to lowerCase
        String str;
        System.out.println("Enter a string: ");
        str=input.next();
        str=str.toLowerCase();
        System.out.println("The lowerCase form of the string is: "+str);

        // Q2 WA java program to replace all the spaces with underscore
        str = "   Hello   ";
        str=str.replace(" ","_");
        System.out.println("The string with all spaces replaced with underscore is: "+str);

        // Q3 Write a java program to fill in a letter template 
        // which looks like
        /*
            letter = "Dear <|name|>, thanks a lot"
            replace <|name|> with a string (some other name)
            => special symbol in order not to replace any other occurance.
        */     
        str="Aman";   
        String letter = "Dear <|Amit|>, Thanks a lot";
        letter = letter.replace("<|Amit|>",str);
        System.out.println(("The letter with letter template with name relpaced is: "+letter));

        input.close();
    }
}
