package chapter_09;
// package chapter_09;
import java.lang.Math;

class Calculator 
{
    public void add(float a,float b)
    {
        System.out.println(a+b);
    }
    public void sub(float a,float b)
    {
        System.out.println(a-b);
    }
    public void mul(float a,float b)
    {
        System.out.println(a*b);
    }
    public void div(float a,float b)
    {
        System.out.println(a/b);
    }
    public void mod(float a,float b)
    {
        System.out.println(a%b);
    }
    
};

class ScientificCalculator extends Calculator{
    public void Sin(double a)
    {
        System.out.println(Math.sin(a));
    }
    public void Cos(double a)
    {
        System.out.println(Math.cosh(a));
    }
    public void Tan(double a)
    {
        System.out.println(Math.tan(a));
    }
};

class HybridCalculator extends ScientificCalculator
{   
    public void addSin(double a,double b)
    {
        System.out.println(Math.sin(a)+Math.sin(b));
    }
    public void modSin(double a,double b)
    {
        System.out.println(Math.sin(a)%Math.sin(b));
    }
    public void subSin(double a,double b)
    {
        System.out.println(Math.sin(a)-Math.sin(b));
    }
    public void mulSin(double a,double b)
    {
        System.out.println(Math.sin(a)*Math.sin(b));
    }
    public void divSin(double a,double b)
    {
        System.out.println(Math.sin(a)/Math.sin(b));
    }
}
public class pset_91 {

    // Q1 Create three classes Calculator, ScCalculator & 
    // HybridCalculator & group them into a package

    public static void main(String[] args){
    }
}
