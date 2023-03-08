package chapter_06;

public class Arrays {
    public static void main(String[] args){
        /*
            Array in java is an Object with key-value pairs
            int arr(reference) = new int[size]; -> object

            Declaration:
            int array[]; Or int [] array;
            Memory Allocation: 
            array = new int [size];
         */
        int array[];
        // int [] array;
        array=new int[5];
        // Index: 0 to size-1
        array[0]=9;        
        array[1]=9;        
        array[2]=9;        
        array[3]=9;        
        array[4]=9;        
        // array[5]=12;   Throws the error
        
        // Accessing array elements
        System.out.println(array[0]);

        // Methods of declaring array in java
        int[] a1;   // Declaration 
        a1 = new int[3];    // Memory Allocation
        a1[0]=1;

        int[] a2= new int[3]; // Declaration & Memory Allocation
        a2[0]=2;

        int[] a3={1,2,3};   // Declaration & Initialization
        a3[0]=3;

    }
}
