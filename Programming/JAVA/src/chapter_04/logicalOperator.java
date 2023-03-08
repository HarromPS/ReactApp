package chapter_04;

// && || ! are commonly used as a logical operator
public class logicalOperator {
    public static void main(String[] args){
        int a=4;
        // AND operator -> evaluates true if both conditions are true
       System.out.print("Logical AND");
        if(a<5 && a==(a/2)){
            System.out.print("\na is less than 5 and it is multiple of 2");
        }
        else{
            System.out.println("\na is not less than 5 and it is multiple of 2");
        }

        // OR operator-> evaluates true if any one condition is true
        System.out.print("\nLogical OR");
        if(a<5 && a==(a/2)){
            System.out.println("a is less than 5 and it is multiple of 2\n");
        }
        else{
            System.out.println("\na is not less than 5 and it is multiple of 2\n");
        }

        // NOT operator -> turns true to false & false to true
        System.out.print("NOT operator");
        if(!(a>3)){
            System.out.println("\na is not greater than 3");
        }
        else{
            System.out.println("\na is greater than 3");
        }
    }
}
