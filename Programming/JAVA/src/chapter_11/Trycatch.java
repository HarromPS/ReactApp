package chapter_11;

public class Trycatch {
    public static void main(String[] args) {
        // Two types of exceptions:
        // 1) Checked -> compiler time error ->handled by compiler
        // 2) Unecked -> run time error

        int a = 1010;
        int b = 0, c;
        try { // code which has to run if there is no exception
            c = a / b;
            System.out.println(c);
        } 
        
        // Exception is a "class"
        // error is a "object"
        catch (Exception error) // if found exception
        {
            // do this
            System.out.println("failed to divide\nreason:");
            System.out.print(0);
            System.out.println("\nProgram end...");
        }
    }
}
