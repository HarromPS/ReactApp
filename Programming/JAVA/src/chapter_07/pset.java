package chapter_07;

// import java.util.Scanner;

// import java.lang.Math;

class Employee12 {
    // Properties
    int salary;
    String name;

    // methods
    public String getName() {
        return name;
    }

    public int getSalary() {
        return salary;
    }

    public void setName(String str2) {
        name = str2;
    }

};

class CellPhone {
    public void ring() {
        System.out.println("Ringing");
    }

    public void vib() {
        System.out.println("Vibrating");
    }
};

class Square {
    int side;

    public void setParameters(int s) {
        side = s;
    }

    public int area() {
        return side*side;
    }
    public int perimeter(){
        return 4*side;
    }
};
class Rectangle {
    int length,breadth;

    public void setParameters(int l,int b) {
        length = l;
        breadth = b;
    }

    public int area() {
        return length*breadth;
    }
    public int perimeter(){
        return 2*(length+breadth);
    }
};

class Circle {
    float radius;
    public void setParameters(float r) {
        radius = r;
    }

    public float area() {
        return radius*radius*3.14f;
    }
    public float perimeter(){
        return 2*(22/7)*radius;
    }
};

class TommyVeceti
{
    public void hit()
    {
        System.out.println("hitted *****");
    }
    public void fire()
    {
        System.out.println("fire :) -^== >>>>>>>");
    }
    public void run(){
        System.out.println("Runnnnnnnnnnnnnn");
    }
};
public class pset {
    public static void main(String[] args) {

        // Q1 Create a class Emplpoyee with the following properties &
        // methods
        Employee12 E1 = new Employee12();
        // E1.name = "Amit";
        E1.setName("Amit");
        System.out.println(E1.getName());
        E1.salary = 122;
        System.out.println(E1.getSalary());
        System.out.println("Hello");

        // Q2 Create a class cellphone with methods to print "ringing" .. "vibrating.."
        CellPhone c = new CellPhone();
        c.ring();
        c.vib();

        // Q3 Create class square with a method to initialize its size, calculating
        // area, perimeter, etc.
        Square s1= new Square();
        s1.setParameters(5);
        System.out.println("The area of the square is: "+s1.area());
        System.out.println("The perimeter of the square is: "+s1.perimeter());

        // Q4 Create a class Rectangle & repeat Q3
        Rectangle r1= new Rectangle();
        r1.setParameters(5,2);
        System.out.println("The area of the rectangle is: "+r1.area());
        System.out.println("The perimeter of the rectangle is: "+r1.perimeter());

        // Q5 Create a TommyVeceti for RockStar Games capable of hitting (print hiting), running , firing, etc
        TommyVeceti tV= new TommyVeceti();
        tV.hit();
        tV.fire();
        tV.run();

        // Q6 Repeat Q4
        Circle c1= new Circle();
        c1.setParameters(4);
        System.out.println("The area of the circle is: "+c1.area());
        System.out.println("The perimeter of the circle is: "+c1.perimeter());
    }
};