package chapter_06;

public class referencePassing {

    static public int change(int x) {
        return x;
    }
    static public void change2(int[] arr) {
        arr[0]=99;
    }
    static public void print(int[] arr)
    {
        System.out.println("The array is: ");
        for (int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        int x = 23;
        change(x);
        System.out.println("The value of x after change method is: " + x);

        // In case of arrays, reference are passed, same as the
        // case for the objects passed to methods
        int[] array = { 1, 2, 3, 4, 5, 6 };
        // reference i.e array(name address of 1st location) is passed to the method
        // in main (array) & change(arr) are the same Array

        print(array);
        change2(array);
        System.out.println("The changed 1st indexed value is: "+array[0]);
        print(array);
     }
}
