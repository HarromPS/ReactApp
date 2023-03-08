package chapter_06;

public class array_methods {
    public static void main(String[] args){
        // 1) arr.length => gives the 
        int []arr={12,3,23,43,34};
        System.out.println("The length of the integer array is: "+arr.length);

        float [] arr2={12.3f,23.3f,22.0f,65.45f};
        System.out.println("The length of the floating array is: "+arr2.length);

        String str[]={"Students","Teachers","Class"};
        System.out.println("The length of the String array is: "+str.length);

        // 2) Displaying the array (naive->innocent way)
        System.out.printf("Naive way\n");
        System.out.print(arr[0]);
        System.out.print(" "+arr[1]);
        System.out.print(" "+arr[2]);
        System.out.print(" "+arr[3]);
        System.out.print(" "+arr[4]);

        // Displaying using loop
        System.out.println("\nUsing for loop");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        // Quick Quiz: Print the array elements in reverse order
        System.out.println("The array in the reverse order is=>");
        for(int i=arr.length-1;i>-1;i--)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        // for each loop => prints all the elements of the array
        System.out.println("The array elements using for each loop");
        // int x:arr;  only works in for each loop
        for(int element:arr)
        {
            System.out.print(element+" ");
        }
        System.out.println();

        // int temp=0;
        // for(int i=0;i<arr.length/2;i++)
        // {
        //    temp=arr[i];
        //    arr[i]=arr[arr.length-1-i];
        //    arr[arr.length-1-i]=temp;
        // }
        // Quick Quiz=> reverse array using for loop
        int n=Math.floorDiv(arr.length,2);
        int temp=0;
        for(int i=0;i<n;i++)
        {
           temp=arr[i];
           arr[i]=arr[arr.length-1-i];
           arr[arr.length-1-i]=temp;
        }
        System.out.println("The array in the reverse order is=>");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        
    }   
}
