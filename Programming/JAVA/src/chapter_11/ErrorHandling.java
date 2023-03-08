package chapter_11;
import java.util.Scanner;

// No matter what how smart we are, errors are our companions
// With practice, we get better at finding & correcting the errors.
public class ErrorHandling {
    public static void main(String[] args) {
        /*
         * 1) Syntax Error 2) Logical error 3) Runtime error(Exception)
         */

        // 1) Syntax error
        // int a No semicolon
        // a=1+2;
        // b = 10; // variable dataType not declared

        // 2) Logical error => error occurs when the program compiles & runs but gives a
        // undesired result
        // WAP to print the prime numeber between 1 to 10
        // for(int i=0;i<5;i++){ ERROR
        // System.out.println(2* i+1);
        // }

        // 3) Runtime Error -> happens if a Bad input is given given at run time
        Scanner sc = new Scanner(System.in);
        // System.out.print("Enter a number: ");
        // int k=sc.nextInt();
        // System.out.println("Tnteger part of 1000 division by k is: "+(float)1000/k);
        int []arr=new int[3];
        arr[0]=12;
        arr[1]=45;
        arr[2]=65;

        System.out.print("Enter the index of a array element: ");
        int i=sc.nextInt();
        System.out.print("Enter a number you want ot divide with: ");
        int num=sc.nextInt();
        try{
            System.out.println("The value at index is: "+arr[i]);
            System.out.println("The number after division is:: "+arr[i]/num);
            System.out.println("Press 1");
            // sc.close();
        }
        // catch(IOException e){
        //  System.out.println("Invalid Input");
        // }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("You are trying to access unallocated memory "+e);
        }
        catch(ArithmeticException e){
            System.out.println("Arithmetic Exception....."+e);
        }
        catch(Exception e){
            System.out.println("Other Exception");
        }
        sc.close();
    }
}
