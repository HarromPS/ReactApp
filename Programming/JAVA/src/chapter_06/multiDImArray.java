package chapter_06;

public class multiDImArray {
    public static void main(String[] args){
        // MultiDimensional Array=> Array of arrays 
        /*
        arr => [0,1,2,3,4] ; =>1D
        arr = >[0[0,1,2] ,1[0,1,2] ,2[0,1,2] ,3[0,1,2] ,4[0,1,2] ]; =>2D
         */
        int arr[];  // 1D array declaration
        arr=new int[1];
        arr[0]=1;
        System.out.println(arr[0]);
        int [][]flats;   // 2D array declaration
        flats=new int [2][3];
        flats[0][0]=10;
        flats[0][1]=20;
        flats[0][2]=30;
        flats[1][0]=40;
        flats[1][1]=50;
        flats[1][2]=60;

        // Displaying the 2D array
        System.out.println("The 2D array is: ");
        for(int i=0;i<flats.length;i++)
        {
            for(int j=0;j<flats[i].length;j++)
            {
                System.out.print(flats[i][j]+" ");
            }
            System.out.println();
        }


    }
}
