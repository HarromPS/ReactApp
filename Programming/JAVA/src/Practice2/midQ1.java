package Practice2;

import java.util.Scanner;
public class midQ1 {
    static Scanner sc=new Scanner(System.in);

    static public float CalculateTotl(float arr[]){
        float t=0;
        for(int i=0;i<arr.length;i++)
        {
            t+=arr[i];
        }
        return t;
    }

    static public float CalculateAvg(float arr[]){
        float t=0;
        for(int i=0;i<arr.length;i++)
        {
            t+=arr[i];
        }
        return t/arr.length;
    }
    public static void main(String[] args){
        System.out.print("Enter the number of students: ");
        int n=Integer.parseInt(sc.nextLine());
        System.out.print("Enter the number of subjects: ");
        int m=Integer.parseInt(sc.nextLine());
        String []name=new String[n];
        float [][]marks=new float[n][m];

        for(int i=0;i<n;i++)
        {
            System.out.print("Enter name of the student: ");
            name[i]=sc.nextLine();
            System.out.println("Enter marks of "+(i+1)+" student");
            for(int j=0;j<m;j++){
                System.out.print("Sub "+(j+1)+": ");
                marks[i][j]=Integer.parseInt(sc.nextLine());
            }
        }

        System.out.println("Name: "+(name[0]));
        System.out.println("Total: "+CalculateTotl(marks[0]));
        System.out.println("Sub1 marks: "+marks[0][1]);
        for(int i=0;i<n;i++){
            System.out.println("Sub1 marks: "+CalculateAvg(marks[i]));
        }
    }
}
