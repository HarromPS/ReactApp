package chapter_08;

class Base123 {
    int b;
    public Base123() {
        System.out.println("\nDefault Constructor of the Base class");
    }

    public Base123(int a) {
        this.b=a;
        System.out.println("\nParameterized Constructor of the Base class");
    }
};

class Derived01 extends Base123 {
    int d;
    public Derived01() {
        super();    // calls its parents default constructor
        System.out.println("\nDefault Constructor of the Derived01 class");
    }

    public Derived01(int a,int b) {
        super(0);
        this.d=b;
        System.out.println("\nParameterized Constructor of the Derived01 class");
    }
}

class Derived02 extends Derived01 {
    int d2;
    public Derived02() {
        super();    // calls its parents default constructor
        System.out.println("\nDefault Constructor of the Derived02 class");
    }

    public Derived02(int a,int b,int c) {
        super(a,b);
        this.d2=c;
        System.out.println("\nParameterized Constructor of the Derived02 class");
    }
}

public class pset_03 {
    public static void main(String[] args) {

        // Q5 Order of execution of inheritence hierachy
        // Base then Derived1 then Derived2
        // Derived2 obj2 = new Derived2();
        // which constructor id executed & in what order?

        // Base123 b1 = new Base123();
        // Derived01 d1 = new Derived01();
        Derived02 d2 = new Derived02();
        System.out.println(d2.d2);
    }
}
