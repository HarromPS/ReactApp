package chapter_08;

class Ekclass {
    int a;

    public Ekclass() {
    }

    public Ekclass(int a) {

        /*
         * - 'this' is a reference to the object of the class avilable in the class
         * - used when parameter & class member name is same
         * 
         */
        // - used when parameter & class member name is same
        this.a = a;
        // System.out.println(a);
    }

    public int returnValue() {
        return this.a;
    }

    public int getA() {
        return this.a;
    }
};

/*
 * - 'super' -> reference variable, to immediate refer parent class object
 * - to invoke parent class method
 * - to invoke parent class constructor
 * 
 */

class Derived3 extends Ekclass {
    public Derived3() {
        // super();
        System.out.println("This is a default derived constructor");
    }
    public Derived3(int z) {
        super(z);
        System.out.println("This is a derived constructor");
    }
};

public class This_super {
    public static void main(String[] args) {
        // this & super keyword
        Ekclass ek = new Ekclass(1);
        System.out.println(ek.getA());

        Derived3 d1= new Derived3();
        System.out.println(d1.a);
        Derived3 d2= new Derived3(3);
        d2.getA();
    }
}