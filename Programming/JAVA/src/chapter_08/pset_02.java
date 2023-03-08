package chapter_08;

class Rectangle12 {
    public double length, breadth;

    public Rectangle12() {
    }

    public Rectangle12(double l, double b) {
        this.length = l;
        this.breadth = b;
    }

    // getters & setters
    public void setValuesRectangle(double l, double b) {
        this.length = l;
        this.breadth = b;
    }

    public double getRectangleLength() {
        return this.length;
    }

    public double getRectangleBreadth() {
        return this.breadth;
    }

    public double areaRectangle() {
        return length * breadth;
    }
};

class Cuboid1 extends Rectangle12 {
    public double height;

    public Cuboid1() {

    }

    public Cuboid1(double l, double b, double h) {
        super(l, b);
        this.height = h;
    }

    public void setValuesCuboid(double l, double b, double h) {
        // Constructor call must be the first statement "in a constructor"
        // super(l,b);
        this.length = l;
        this.breadth = b;
        this.height = h;
    }

    public double getCuboidLength() {
        return this.length;
    }

    public double getCuboidBreadth(double l, double b) {
        return this.breadth;
    }

    public double getCuboidHeight(double l, double b) {
        return this.height;
    }

    public double areaCuboid() {
        return 2 * (length * breadth + length * height + breadth * height);
    }

    public double volume() {
        return length * breadth * height;
    }
};

public class pset_02 {
    public static void main(String[] args) {
        // Q2 Repeat Q1 for Rectangle to Cuboid
        // Q3 Create area() & volume() methods for both
        // Q4 Also create getters & setters

    }
}
