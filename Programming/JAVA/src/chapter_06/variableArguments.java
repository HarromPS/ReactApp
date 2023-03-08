package chapter_06;

public class variableArguments {

    // variable arguments are used to reduce the method multplicity. 
    // i.e creating multiple methods for different arguments.

    // So int ...varArgs => available as int[] args;
    // used to create a array of arguments & can be accessed using indexex A/c to their 'order of Argument'.
    public static void sum(int ...varArgs)
    {
        int result=0;
        for(int i:varArgs)
        {
            result+=i;
        }
        System.out.println("The result of All Arguments are: "+result);
    }
    public static void sum1(int x,int ...varArgs)
    {
        int result=0;
        for(int i:varArgs)
        {
            result+=i;
        }
        System.out.println("The result of All Arguments are: "+result);
    }
    public static void main(String[] args){
        // with zero argument 
        sum();

        // with multiple argument
        sum(1,2);
        sum(1,2,3,4,5,6,7);

        // with compulsory arguments & others are varArgs
        sum1(1);    // 1 -> compulsory argument
        sum1(1,2);
        sum1(1,2,3);
    }
}
