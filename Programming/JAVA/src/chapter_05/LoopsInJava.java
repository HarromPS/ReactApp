package chapter_05;

// while loop 
// do while loop
// for loop 
class LoopsInJava {
    public static void main(String[] args) {
        // To execute the instructions repeatedly we usre loops
        // 1) while(condition){...} loop -> runs until the condition is true.
        // 2) conditions can be a boolean expresion as well.
        // 3) condtions can be expressions as well.
        int i = 0;
        System.out.println("Running while loop");
        while (i <= 5) // -> checks the condition first then executes
        {
            System.out.print((i + 1)+" ");
            i++;
        }
        // int in the condition gives the error
        // use boolean instead of 1
        // while(1) => gives error
        // while(true) // boolean condition
        // // Runs for infinite loop
        // {
        // System.out.println("This is an infinite loop");
        // }

        // Quick quiz to print 100-200 natural numbers
        i = 100;
        // while (i >= 100 && i <= 200) {
        //     System.out.println(i);
        //     i++;
        // }
        
        System.out.println("\nRunning the do while loop");
        // do while loops -> executes the code, then checks the condition
        do          // =>runs at least once
        { 
            System.out.print(i+" ");
            i++;
        } while (i < 5);
        System.out.println();
        // Quick Quiz: WAP to print the first n natural numbers using do while loop
        i=0;
        do 
        {
            i++;
            System.out.print(i+" ");
        }while(i<10);

        // for loop -> used to execute a piece of code
        // for a specific

        // for(initialization ; check_boolean_expression(condition) ; increment/decrement)
        // {
        //     // code
        // }
        System.out.println("\nRunning the for loop");
        for(int j=0;j<10;j++)
        {
            System.out.print(j+" ");
        }
        // Quick Quiz: WAP to print the first odd numbers using for loop.
        System.out.println();
        for(int j=0;j<5;j++)
        {
            // if(j%2!=0){
            //     System.out.print(j+" ");
            // }
            System.out.print((2*j+1)+" ");
        }
        System.out.println();
        // Decrement in for loop
        for(int j=5;j>=0;j--){     // => if j=> j++ runs infinite loop
            System.out.print(j+" ");
        }
        System.out.println();
        // Boolean expression
        for(int j=7; j != 0 ;j--){
            System.out.print(j+" ");
        }
        System.out.println();
        // Quick Quiz: WAP to print the first natural numbers in reverse order
        for(int j=10;j>0;j--){
            System.out.print(j+" ");
        }
    }
};