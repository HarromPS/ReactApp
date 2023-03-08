package chapter_06;

public class practiceSetArray {
    public static void main(String[] args) {
        // Q1 WAP to create a array of floats & calculate their sum
        float[] f = { 12.3F, 34.6F, 7.5F, 65.23F };
        float sum = 0f;
        for (int i = 0; i < f.length; i++) {
            sum += f[i];
        }
        System.out.println("The sum of the floats are: " + sum);
        sum = 0f;
        for (float i : f) {
            sum += i;
        }
        System.out.println("The sum of the floats using for each loop is: " + sum);

        // Q2 WAP to find if an integer is present in the array or not
        int arr[] = { 12, 23, 434, 53, 3, 4 };
        int n = 41;
        boolean isInArray = false;
        for (int i = 0; i < arr.length; i++) {
            if (n == arr[i]) // checks n for every index of array
            {
                isInArray = true; // if found=> break
                break;
            }
        }
        if (isInArray) // is isInArray is true then if code block is executed
        {
            System.out.println(n + " is in the array");
        } else {
            System.out.println(n + " is not in the array");
        }

        // Q3 Calculate the average marks of all students in physics
        // using for each loop
        int[] phy_marks = { 67, 56, 45, 76, 78 };
        int sum1 = 0;
        for (int i : phy_marks) {
            sum1 += i;
        }
        System.out.println("The average marks for the physics of all students is: " + sum1 / phy_marks.length);

        // Q4 Create a java to add two matrices of size 2x3
        int[][] mat1 = { { 1, 2, 3 }, 
                       { 4, 5, 6 } };
        int[][] mat2 = { { 11, 12, 13 },
                       { 14, 15, 16 } };
        int add[][]=new int[2][3];
        for(int i=0;i<mat1.length;i++)
        {
            for(int j=0;j<mat1[i].length;j++)
            {
                add[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        System.out.println("The sum of the 2D array is :");
        for(int i=0;i<mat1.length;i++)  // rows number of times
        {
            for(int j=0;j<mat1[i].length;j++)   // col number of tieme
            {
                System.out.printf("%d ",add[i][j]);
            }
            System.out.println();
        }
        
        // Q5 WAP to reverse the 2D array 
        System.out.println("The reversed the 2D array is: ");
        for(int i=mat1.length-1;i>-1;i--)
        {
            for(int j=mat1[i].length-1;j>-1;j--)
            {
                System.out.print(add[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("The reversed the 2D array is: ");
        for(int i=mat1.length-1;i>-1;i--)
        {
            for(int j=0;j<mat1[i].length;j++)
            {
                System.out.print(add[i][j]+" ");
            }
            System.out.println();
        }
        // will throw error
        // System.out.println("The reversed the 2D array is: ");
        // for(int i=mat1[mat1.length-1].length;i>-1;i--)
        // {
        //     for(int j=0;j<mat1[i].length;j++)
        //     {
        //         System.out.print(add[i][j]+" ");
        //     }
        //     System.out.println();
        // }

        // Q6 WAP in java to find the maximnum element in the array
        int max=arr[0];
        for(int i=1;i<arr.length;i++)
        {
            if(max<arr[i]){
                max=arr[i];
            }
        }
        System.out.println("The maximum element of the array is: "+max);

        // Q7 WAP in java to find the minimum element in the array 
        int min=arr[0];
        for(int i=1;i<arr.length;i++)
        {
            if(min>arr[i]){
                min=arr[i];
            }
        }
        System.out.println("The minimum element of the array is: "+min);

        // Q8 WAP to find if the array is sorted or not(whether in increasing or decreasing)
        int[] arr2={1,2,3,14,5,16};
        boolean isSorted=true;
        // increasing order
        for(int i=0;i<arr2.length-1;i++)
        {
            if(arr2[i]>arr2[i+1])
            {
                isSorted=false;
                break;
            }
        }
        if(isSorted)
        {
            System.out.println("The array is Sorted");
        }
        else{
            System.out.println("The array is not Sorted");

        }
        
        System.out.println(Integer.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE);
    }
}
