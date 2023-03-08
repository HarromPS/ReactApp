package chapter_08;

class Base1{
    public int x;

    // Constructors in Inheritence
    public Base1(){
        System.out.println("This is a Base class default constructor");
    }
    public Base1(int x1){
        this.x=x1;
        System.out.println("This is a Base class parameterized constructor "+x);
    }
    public void getBase1(int x1)
    {   
        x=x1;
    }
    public int setBase1()
    {
        return x;
    }
};

// super -> reference to the Base class variable, method or constructor
// with constructor
/*
- super() ; => default constructor of Base class
- super(x); => parameterized constructor of Base class
- super(x,y);
 */
class Derived1 extends Base1{
    public int y;
    public Derived1()
    {
        // default available in each method automatically compiler add to it 
        super();
        // super(0);// => not allowed to call a method before the Base constructor
        System.out.println("This is a Derived class default constructor");
    }
    public Derived1(int y1)
    {
        // parameterized base constructor
        super(12);
        y=y1;
        System.out.println("This is a Derived class default constructor "+y);
    }
    public Derived1(int x,int y)
    {
        // parameterized base constructor
        super(x);
        this.y=y;
        System.out.println("This is a Derived class default constructor "+y);
    }
    public void getDerived1(int y1)
    {
        y=y1;
    }
    public int setDerived1()
    {
        return y;
    }
};

class childDerived extends Derived1
{
    public int z;
    public childDerived()
    {
        super();
        System.out.println("This is a Child of Derived class default constructor ");
    }
    public childDerived(int x,int y,int z){
        super(x,y);
        this.z=z;
        System.out.println("This is a Child of Derived class default constructor "+z);
    }
};
public class constructors {
    public static void main(String[] args){
        // Constructors in Inheritance in Java
        // Base1 b=new Base1();
        System.out.println();
        // 1st Base class constructor then Derived class constructor
        // parent > child > grandchild
        // Derived1 d=new Derived1();
        // Derived1 d1=new Derived1(32);

        // childDerived c=new childDerived();
        childDerived c1=new childDerived(10,20,30);
        System.out.println(c1.z);
        


    }
}
