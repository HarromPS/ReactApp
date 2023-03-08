package Practice;
import java.util.Scanner;

public class Armstrong{
    static int cube(int n){
        return (n*n*n);
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a=input.nextInt();
        int sum=0,rem=0,temp=a;
        while (a>0) {
            rem=a%10;
            sum=(sum)+cube(rem);
            a=a/10;
        }
        if(temp==sum){
            System.out.println("YES "+temp+" is a armstrong number");
        }
        else{
            System.out.println("NO "+temp+" is not a armstrong number");
        }
        input.close();
    }
};
