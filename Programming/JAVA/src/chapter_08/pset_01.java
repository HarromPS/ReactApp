package chapter_08;

import java.lang.Math;

// Q1
class Circle {
    double radius;

    public Circle() {
        System.out.println("Non-parametrized constructor");
    }

    public Circle(double r) {
        System.out.println("Radius initialized of the parametrized constructor");
        radius = r;
    }

    // getters & setters
    public void setValuesCircles(double r){
        this.radius=r;
    }
    public double getValuesCircles(){
        return this.radius;
    }
    public double area() {
        return Math.PI * this.radius * this.radius;
    }
};

class Cylinder extends Circle {
    public double height;
    
    public Cylinder() {
        
    }
    public Cylinder(double r, double h) {
        super(r);
        System.out.println("Radius & Height initialized of the parametrized constructor of Cylinder");
        this.height = h;
    }
    public void setValuesCylinder(double r,double h){
        this.radius=r;
        this.height=h;
    }
    public double getCylinderRadius(){
        return this.radius;
    }
    public double getCylinderHeight(){
        return this.height;
    }
    public double volume() {
        return Math.PI * this.radius * this.radius * this.height;
    }
};

public class pset_01 {
    public static void main(String[] args) {
        // Q1 Create a class Circle & use inheritence to create another
        // class Cylinder. Also create getters & setters
        Circle c = new Circle();
        System.out.println("\nThe radius is: "+c.radius);
        Circle c1 = new Circle(4);
        System.out.println("\nThe radius is: "+c1.radius);
        Cylinder cy = new Cylinder();
        System.out.println("\nThe radius & height is: "+cy.radius+","+cy.height);
        Cylinder cy1 = new Cylinder(2,3);
        System.out.println("\nThe radius & height is: "+cy1.radius+","+cy1.height);
    }

}
