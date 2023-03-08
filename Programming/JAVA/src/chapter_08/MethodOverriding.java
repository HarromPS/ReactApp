package chapter_08;

class A1
{
    public int returnVlaue(int x)
    {
        return x;
    }
    public void method()
    {
        System.out.println("This is a method of Base class");
    }
};
/*
- when Base & Derived class have a same method with same name & parameters
& return types & we want to invoke derived class method 

-> we override Base class method ==> method Overloading
 */
class B1 extends A1
{
    public int getVal(int x)
    {
        return x;
    }

    // This method is overrided (virtual function)
    // Use method() function which is derived from Base, as a derived class method
    @Override   // override notation
    public void method()
    {
        System.out.println("This is a method of Derived class");
    }
};
public class MethodOverriding {
    public static void main(String[] args){
        A1 a = new A1();
        a.method();

        B1 b=new B1();
        b.method();
    }
}
