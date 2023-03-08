package chapter_09;

interface I {
    void method1();

    void method2();
}

// extending interfaces just like extending classes
interface J extends I {
    void method3();

    void method4();
}

// superClass must be a class
// class A extends J
class A implements J {
    @Override
    public void method3() {
        System.out.println("Method 3");
    }

    @Override
    public void method4() {
        System.out.println("Method 4");
    }

    @Override

    public void method1() {
        System.out.println("Method 1");
    }

    @Override
    public void method2() {
        System.out.println("Method 2");
    }
};

public class Inheritance_Interfaces {
    public static void main(String[] args) {
        // class A a = new A();
        A a = new A();
        a.method3();
        a.method4();
        a.method2();
        a.method1();

    }
}
