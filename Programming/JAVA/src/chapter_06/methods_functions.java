package chapter_06;

public class methods_functions {
    // static keyword => methods can be invoked without using the object
    // static method/variable can only be accessed with a static function

    // static before method declaration
    // called directly no need to have a object to call
    static public int function(int a, int b) // only copies of the arguments are passed
    {
        int c = a + b;
        return c;
    }

    static int sum(int x, int y) {
        if (x > y) {
            return x + y;
        } else {
            return ((x - y) * 2);
        }
    }

    // function without static keyword
    public int a1, b1;

    int sum2(int a, int b) {
        a1 = a;
        b1 = a + b;
        a1 = a1 + b1;
        return a1;
    }

    // function to print the object variables
    void print() {
        System.out.print(a1+" ");
        System.out.println(b1);
    }

    public static void main(String[] argument) {
        int a = 12, b = 43;

        // returns from where it is called/invoked
        int c = function(a, b);
        System.out.println("The sum of " + a + " & " + b + " is: " + c);

        c = sum(a, b);
        System.out.println("The sum of " + a + " & " + b + " is: " + c);

        // Another way to call the function
        // className objectName = new className();
        // object.function();

        methods_functions object = new methods_functions();
        object.sum2(a,b);
        object.print();
        System.out.println("Hello");

    }
}