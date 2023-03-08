package Practice;
import java.util.Scanner;
import java.lang.Math;

abstract class Shape{

    public abstract void setParameters();
    public abstract float area();
    public abstract float perimeter();
};

class Reactangle extends Shape
{
    static Scanner sc=new Scanner(System.in);
    float length,breadth;
    @Override
    public void setParameters()
    {
        System.out.print("Length: ");
        this.length=sc.nextFloat();
        System.out.print("Breadth: ");
        this.breadth=sc.nextFloat();
    }
    @Override
    public float area()
    {
        return length*breadth;
    }
    @Override
    public float perimeter()
    {
        return 2*(length+breadth);
    }
};
class Circle extends Shape
{
    static Scanner sc=new Scanner(System.in);
    float radius;
    @Override
    public void setParameters()
    {
        System.out.print("Radius: ");
        this.radius=sc.nextFloat();
    }
    @Override
    public float area()
    {
        return (float)Math.PI*radius*radius;
    }
    @Override
    public float perimeter()
    {
        return 2*(float)Math.PI*radius;
    }
};
class Triangle extends Shape
{
    static Scanner sc=new Scanner(System.in);
    float base,height,a,b,c;
    @Override
    public void setParameters()
    {
        System.out.print("Base: ");
        this.base=sc.nextFloat();
        System.out.print("Height: ");
        this.height=sc.nextFloat();

        System.out.print("Side 1: ");
        this.a=sc.nextFloat();
        System.out.print("Size 2: ");
        this.b=sc.nextFloat();
        System.out.print("Size 3: ");
        this.c=sc.nextFloat();
    }
    @Override
    public float area()
    {
        return base*height;        
    }
    @Override
    public float perimeter()
    {
        return (a+b+c);        
    }
};
public class AbsClass{
    public static void main(String[] args){
        System.out.print("Enter parameters of Rectangle\n");
        Reactangle r=new Reactangle();
        r.setParameters();
        System.out.print("Area: "+r.area()+"\n");
        System.out.print("Perimeter: "+r.perimeter()+"\n");
        
        System.out.print("\nEnter parameters of Circle\n");
        Circle c =new Circle();
        c.setParameters();
        System.out.print("Area: "+c.area()+"\n");
        System.out.print("Perimeter: "+c.perimeter()+"\n");

        System.out.print("\nEnter parameters of Triangle\n");
        Triangle t=new Triangle();
        t.setParameters();
        System.out.print("Area: "+t.area()+"\n");
        System.out.print("Perimeter: "+t.perimeter()+"\n");
    }
}
