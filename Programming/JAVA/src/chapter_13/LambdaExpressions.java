package chapter_13;

@FunctionalInterface
interface next
{
    // void meth1();
    void meth2(int a);
}

interface DemoD {
    void method1();

    void method2();
};

class B implements DemoD {

    @Override
    public void method1() {
        throw new UnsupportedOperationException("Unimplemented method 'method1'");
    }

    @Override
    public void method2() {

        throw new UnsupportedOperationException("Unimplemented method 'method2'");
    }

}

class A1 implements DemoD {
    public void show() {
        System.out.println("Demo");
    }

    @Override
    public void method1() {
        System.out.println("Method 1 of a implemented");
    }

    @Override
    public void method2() {
        System.out.println("Method 2 of a implemented");
    }
}

public class LambdaExpressions {

    public static void main(String[] args) {
        A1 a = new A1();
        a.method1();

        // Instantiated using a anonymous class -> class with no name
        // i.e an Interface

        // Creating an reference to the object of Interface
        // & overriding the methods same as doing in a class

        // Significance: no need to implement to a class
        // we can directly create objects of a anonymous class
        DemoD d = new DemoD() {
            @Override
            public void method1() {
                System.out.println("Method 1 of Anonymous class");
            }

            @Override
            public void method2() {
                System.out.println("Method 2 of Anonymous class");
            }
        };
        // e.g
        d.method1();

        // for @FunctionalInterface
        // Lambda Expression-> if an interface is made,to use it
        // we create a class & Overrides its methods-> code lengthy .

        // Soln ->Lambda Expression
        // Create a reference of the interface
        // method Override & equal to the object

        // Syntax:
        // next obj=()->
        // {
        //     System.out.println("Method using lambda Exression");
        // };

        // with parmeters
        next obj=(para)->
        {
            System.out.println("Method using lambda Exression with parameters "+para);
        };

        // obj.meth1();
        obj.meth2(23);


    }
}
