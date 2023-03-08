package chapter_05;

public class ContinueStatement {
    public static void main(String[] args){
        // Continue Statements -> used to continue the loop by leaving the 
        // steps after the continue statement 
        // i.e control moves immediately to the next iteration of the loop
        for(int i=0;i<5;i++)
        {
            if(i==2)
            {
                System.out.print("\nContinue from the next iteration\n");
                continue;
            }
            System.out.print(i+" ");
        }
        System.out.println();
        // do while loop
        int i=0;
        System.out.println("\ndo while loop");
        do {
            i++;
            if(i==2){
                System.out.print("\nContinue from next iteration\n");
                continue;
            }
            System.out.print(i+" ");
        }while(i<6);
        
    }
}
