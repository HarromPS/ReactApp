package chapter_13;
import java.lang.Deprecated;
// Used to provide the extra information about the program
// if annotations are applied in the program the compiler changes its behavoiur.

// 1) @Override-> shows overriden element in child class of super class
// 2) @Deprecated-> deprecated methods
// 3) @SuppressWarnings-> suppress compiler warnings
// 4) @functionalInterface-> ensure an interface is a functional interface

@FunctionalInterface
interface functionalInterface{
    void method1();
    // void method2(); // Invalid '@FunctionalInterface' annotation; functionalInterface is not a functional interface
}

class BaseClass {
    public void show() {
        System.out.println("Not showing Show");
    }
}

class DerivedClass extends BaseClass {
    @Override
    public void show() {
        System.out.println("Time is showing 18:09");
    }

    @Deprecated
    public void print()
    {
        System.out.println("Print");
    }

    public int sum(int a,int b)
    {
        return a+b;
    }
}


public class Annotations {
    // @SuppressWarnings("deprecation")

    @Deprecated
    static public void print2()
    {
        System.out.println("Print");
    }
    public static void main(String[] args) {
        DerivedClass d=new DerivedClass();
        d.show();
        d.print();
        System.out.print(d.sum(1,2));
    }
}
