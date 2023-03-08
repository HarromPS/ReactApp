package chapter_04;

// Relational operator -> used to evaluate the conditions (true/false)

public class relationalOperator {
    public static void main(String[] args){
        // Relational operator
        int age=18;
        if(age>18){     // greater than operator
            System.out.println("Yes, You can drive");
        }
        else{
            System.out.println("No, you cannot drive");
        }

        if(age<3){  // less than operator
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

        if(age<=3){  // less than equal to operator
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

        if(age>=3){  // greater than equal to operator
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

        if(age!=3){  // not equal to operator
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

        if(age==3){  // equality operator
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
