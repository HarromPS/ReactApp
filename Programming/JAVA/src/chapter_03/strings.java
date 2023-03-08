package chapter_03;
import java.util.Scanner;
/*
In Java,
    String is an class in Java, and the variables are the references
    String literals are the objects , in Java Strings are different
    from array of characters 
    String is an derived dataType & not primitive datatype
    String is a sequence of characters 
    String name = new String ("Hello");
    OR
    String name = "Hello";

    Strings are immutable means once an reference points a string
    a memory is created in heap and when reference changes to another 
    string the previous strings still exist, thus Strings are immutable.

 */
public class strings {
    public static void main(String[] args){
        String  name=new String("Hello");
        System.out.println(name);

        // OR
        name = "World";
        System.out.println(name);

        // Strings as user inputs
        Scanner input=new Scanner(System.in);

        // input.next() takes a character or a single word
        // System.out.print("Enter a word: ");
        // String Str=input.next();
        // System.out.println("Takes a character or a single word input: "+Str);

        // input.nextLine() takes the whole sentence
        System.out.print("Enter a sentence: ");
        String Str=input.nextLine();
        System.out.println("Takes the whole sentence: "+Str);

        input.close();
        // Different ways to print in Java
        System.out.print("\nSystem.out.print() prints with no newLine at the end");
        System.out.println();
        System.out.println("System.out.println() prints newLine at the end\n");

        // System.out.printf() - works exactly as 'printf' in C/C++
        int a=2;
        float b=3.4f;
        System.out.println("System.out.printf() - works exactly as 'printf' in C/C++");

        // %8.3f => occupies 8 space incluing space,decimal & numbers
        // & .3 means it prints upto 3 decimal places
        // 3.4f=>     3.400
        System.out.printf("The value of a is %d & value of b is %8.3f\n",a,b);
    }
}
