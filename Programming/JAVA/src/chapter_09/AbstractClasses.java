package chapter_09;

// if a class includes a abstract class then the whole class is abstract
abstract class Parent
{
    // default constructor
    public Parent(){
        System.out.println("This is a default constructor Base class");
    }

    // method declared as abstract
    abstract public void greet();

};

class Child extends Parent{
    @Override
    public void greet()
    {
        System.out.println("Child1 Derived to inherit Abstract class\n");

    }
};

/* 2 ways to inhert a abstract class
 1) redefine methods using @Override notation
 2) make edrived class an abstract class
    Parent class -> std class to make other classes
    ie. std class to std class
 */
// Can be used to create other classes => concrete classes
abstract class Child2 extends Parent{
    @Override
    public void greet()
    {
        System.out.println("Hello World");
    }
}

class Child3 extends Parent{
    @Override
    public void greet()
    {
        System.out.println("Child3 Derived to inherit Abstract class");
    }
}
public class AbstractClasses {
    public static void main(String[] args){
        // Abstract -> Khayali pulav, existing in an idea without any 
        // concrete existance

        // Abstract Method-> method defined without an implementation

        // Abstract class-> a class having a abstract method
        // method must be defined as abstract for the class to be defined
        // as abstract

        // Parent p = new Parent();    -> abstract class is no tused to make object
        Child ch= new Child();
        ch.greet();

        // Child2 ch2= new Child2();   ->abstract class is no tused to make object
        // ch2.greet();

        Child3 ch3 = new Child3();
        ch3.greet();

        // it is possible to create reference of abstract class 
        // super class reference = concrete subclass object 
        // Dynamic Methods Dispatch (ptr to derived classes C++ )
    }
}
