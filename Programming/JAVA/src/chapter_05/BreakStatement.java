package chapter_05;

class BreakStatement {
    public static void main(String[] args) {
        // Break statement using loops
        // Break -> used to exit the loop irrespective the condition is true or false.
        for (int i = 0; i < 5; i++) {
            System.out.print(i + " ");
            System.out.println("Running");
            if (i == 3) {
                System.out.println("if-else statement");
                System.out.println("Breaking Statement on i=" + i);
                break;
            }
        }
        // Works in if-else, switch case & loops
        int k = 3;
        System.out.println();
        switch (k) {
            case 3:
                System.out.println("Switch control statement k=" + k);
                break;

        }
        // while loops
        System.out.println();
        while (k < 8) {
            if (k == 6) {
                System.out.println("\nBreaking from while loop k=" + k);
                break;
            }
            System.out.print(k+" ");
            k++;

        }
        // do while loop
        System.out.println();
        do{
            if(k==9)
            {
                System.out.println("\nBreaking from do while loop");
                break;
            }
            System.out.print(k+" ");
            k++;
        }while(k<14);
    }
};