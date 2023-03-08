package chapter_04;

/*
Decisions making instructions in Java are:
1) If-else statements.
2) Switch Case statements.
 */
public class conditionStatements {
    public static void main(String[] args){
        // If - else statements + Relational operator
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
