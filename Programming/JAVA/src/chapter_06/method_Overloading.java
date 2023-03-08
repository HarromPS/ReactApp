package chapter_06;

public class method_Overloading {
    static public void fun() {
        System.out.println("Hello");
    }

    static public void fun(int a) {
        System.out.println("Hello " + a);
    }

    static public void fun(int a, int b) {
        System.out.println(a + " Hello " + b);
    }

    // Note: Methods Overloading with differnt return
    // types cannot be performed
    // static public int fun(int a,int b)
    // {
    //      System.out.println(a+" Hello "+b);
    //      return 2;
    // }
    public static void main(String[] args) {

        // Overloaded Methods
        fun();
        fun(100);
        fun(3000, 4000);
    }
}
