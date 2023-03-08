package chapter_03;
import java.util.Scanner;

// String Methods
public class stringMethods {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        /*
            Strings are immutable i.e original cannot be changed
            But a new String can be returned from the existing 
            String by copying then data of the original string 
            & make modifications & return it.
         */
        String name = "Hello";
        // indexing in String starts from 0 1 2 3 4 => 5
        System.out.println(name.length());
        int lengthOfString = name.length()+1; // returns length of the string
        System.out.println("The length of the String 'name' is: "+lengthOfString);

        // toLowerCase(); -> returns a new String of all lower case from original string 
        String lowerString=name.toLowerCase();
        System.out.println("The lowerCase of String 'name' is: "+lowerString);

        // toUpperCase(); ->returns a new String of all upper case from original string
        String upperString=name.toUpperCase();
        System.out.println("The upperCase of String 'name' is:"+upperString);

        // name.trim(); -> returns a new String by removing all leading 
        // & trailing spaces from original array
        name = "  World  ";
        System.out.println("String without trim: "+name);
        String withTrim=name.trim();
        // System.out.println(name.trim());
        System.out.println("String with trim: "+withTrim);
        
        // name.substring(int start_index) -> returns new String starting from 
        // index start_index upto end => 2, llo
        name= "Hello";
        // if index = 0 => redundant string
        System.out.println("The subString of 'name' is: "+name.substring(2));

        // name.substring(start, end) -> returns new String starting from 
        // start & ends on (end-1) end is excluded
        name= "Hello";
        // if index = 0 => redundant string
        System.out.println("The subString of 'name' with exclusion is: "+name.substring(1,4));

        // name.replace('r' ,'p') -> returns a new String by replacing all the 
        // occurances of the old char with new char
        System.out.println("The replace letter in 'Hello'is :"+name.replace('l','p'));
        // Also strings 
        System.out.println("The replace letter in 'Hello'is :"+name.replace("ll","mm"));
        // Also letter with strings
        System.out.println("The replace letter in 'Hello'is :"+name.replace("e","elegant"));

        // name.startsWith("Ha"); -> returns a boolean (true) if the string 
        // with "Ha" 
        boolean x=name.startsWith("He");
        if(x)
        {
            System.out.println("The string starts with 'Ha'");
            System.out.println("The string starts "+name.startsWith("Ha"));

        }
        else{
            System.out.println("The string does not starts with 'Ha'");
        }

        // name.endsWith("Ha") -> returns true if ends with Ha
        x=name.endsWith("o");
        if(x)
        {
            System.out.println("The string ends with O");
            System.out.println(name.endsWith("o"));
        }
        else{
            System.out.println("The string does not ends with O");
            System.out.println(name.endsWith("t"));
        }
        
        // name.charAt(2) -> returns the character at the given index
        System.out.printf("The characters at the indexes are: ");
        for(int i=0;i<name.length();i++)
        {
            System.out.print("("+name.charAt(i)+", "+i+")");
        }

        // name.nameOf("He"); -> returns the 1st occcurance index of the 
        // substring 
        String x1="Harrirri";
        System.out.println("\n"+x1.indexOf("rri",6));

        System.out.println("The index of the first occcurance index of ell is: "+name.indexOf("ell"));  
        // ell -> 1 2 3 , ell is an occurance at index 1

        x1="Harryrryrry";
        System.out.println(x1.length());
        // name.lastIndexOf("rry");
        // returns 8
        System.out.println("The last index of rrt is: "+x1.lastIndexOf("rry"));
        // returns 2
        System.out.println("The last index of rrt after 4 index is: "+x1.lastIndexOf("rry",4));
        // returns 5
        System.out.println("The last index of rrt after 7 index is: "+x1.lastIndexOf("rry",7));

        String str="Harrish";
        System.out.println("The indexOf('rr') in Harrish is: "+str.indexOf("rr"));

        String s= "Jokerererrr";
        System.out.println("The er last index is: "+s.lastIndexOf("er"));
        System.out.println("The er last index after index 6 is: "+s.lastIndexOf("er",6));

        // name.equals("Hello"); -> returns true if matches the name string
        // String in Java is Case Sensitive 
        if(name.equals("rello"))
        {
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }

        // name.equalsIgnoreCase("heLLO"); -> returns true if the value is same
        // ignores upperCase or lowerCase
        if(name.equalsIgnoreCase("heLLo"))
        {
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }

        System.out.println("Escape Sequence Characters");
        System.out.println("backspace ::  Hel\blo");
        System.out.println("newLine :: Hello\n");
        System.out.println("formfeed :: Hello\foo");
        System.out.println("carriage return  :: Hello\rab");
        System.out.println("bachslash :: Hello\\");
        System.out.println("horizontal tab :: Hello\tt");
        System.out.println("null escapre sequence :: character::  Hello\0t");
        input.close();  
    }
}
