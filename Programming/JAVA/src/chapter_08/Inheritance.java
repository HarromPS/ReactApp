package chapter_08;

class Base
{
    public int x;
    public void setBase(int x1)
    {
        this.x=x1;
    }
    public int getBase()
    {
        return x;
    }
};
class Derived extends Base
{
    int y;
    public void setDerived(int y1)
    {
        this.y=y1;
    }
    public int getDerived()
    {
        return y;
    }
};
public class Inheritance {
    public static void main(String[] args){
        // Inheritence -> Way to derive/inherit the properties & methods of 
        // an existing class but its availability depends on access modifiers

        // Base Class (class to be inherited) --> Derived class

        // To inherit the Base class => use 'extends' keyword
        // Grandfather -> Father -> Son (Generational Inheritance)

        Base b =new Base();
        b.setBase(4);
        System.out.println("The base is: "+b.getBase());

        // has no .setDerived() & .getDerived() -> methods to call
        // Base b1 =new Base();
        // b1.setDerived(4);
        // System.out.println("The base is: "+b1.getDerivedsetDerived());

        Derived d =new Derived();
        d.setDerived(14);
        // d.getBase will give 0 as for 'd' object the value of x is not set
        System.out.println("The Derived is: "+d.getDerived());

        Derived d1 = new Derived();
        d1.setBase(12);
        // d.getBase will give value base x
        System.out.println("The Derived from Base is: "+d1.getBase());

    }
};
