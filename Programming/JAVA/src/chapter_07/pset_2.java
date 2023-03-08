package chapter_07;

class Cylinder {
    float radius;
    float height;
    float area, volume;

    // Default Constructor
    Cylinder() {
    }

    // Parameterized constructor
    Cylinder(float r, float h) {
        radius = r;
        height = h;
    }

    public void setValue(float r, float h) {
        radius = r;
        height = h;
    }

    public void getValue() {
        System.out.println("The radius of the cylinder is: " + radius);
        System.out.println("The height of the cylinder is: " + height);
    }

    public float areA() {
        area = 2f * (22f / 7f) * radius * (radius + height);
        return area;
    }

    public float volumE() {
        volume = (22f / 7f) * radius * radius * height;
        return volume;
    }
};

class Rectangle1 {
    float length;
    float breadth;

    // Default Constructor
    Rectangle1() {
    }

    // Parameterized constructor
    Rectangle1(float l, float b) {
        length = l;
        breadth = b;
    }

    Rectangle1(float l) {
        length = l;
        breadth = 5;
    }

    public void setValue(float l, float b) {
        length = l;
        breadth = b;
    }

    public void getValue() {
        System.out.println("The length of the rectangle is: " + length);
        System.out.println("The height of the rectangle is: " + breadth);
    }

    public float areA() {
        return length * breadth;
    }

    public float perimeter() {
        return 2 * (length + breadth);
    }
};

class Sphere {
    float radius;
    float area, volume;

    // Default Constructor
    Sphere() {
    }

    // Parameterized constructor
    Sphere(float r) {
        radius = r;

    }

    public void setValue(float r) {
        radius = r;
    }

    public void getValue() {
        System.out.println("The radius of the sphere is: " + radius);
    }

    public float areA() {
        area = (22f / 7f) * 4f * (radius * radius);
        return area;
    }

    public float volumE() {
        volume = (4f / 3f) * (22f / 7f) * radius * radius * radius;
        return volume;
    }
};

public class pset_2 {
    public static void main(String[] args) {
        // Q1 Create a class cylinder & use getter & setter to set the radius
        // & height;
        Cylinder C = new Cylinder();
        C.setValue(4f, 12f);
        C.getValue();

        // Q2 Use class in Q1 to calculate the area & volume of the cylinder
        System.out.println("The Area of the cylinder is: " + C.areA());
        System.out.println("The Volume of the cylinder is: " + C.volumE());

        System.out.println();
        // Q3 Use a constructor & repeat Q1
        Cylinder a = new Cylinder(3, 10);
        a.getValue();
        System.out.println("The Area of the cylinder is: " + a.areA());
        System.out.println("The Volume of the cylinder is: " + a.volumE());

        System.out.println();
        // Q4 Overload a constructor used to initialize a rectangle of length 4
        // & breadth 5 for using custom parameters.
        Rectangle1 r = new Rectangle1();
        r.setValue(3, 4);
        r.getValue();
        System.out.println("The Area of the rectangle is: "+r.areA());
        System.out.println("The Perimeter of the rectangle is: "+r.perimeter());

        System.out.println();
        // Q5 Repeat Q1 for sphere
        Sphere s = new Sphere();
        s.setValue(3);
        s.getValue();
        System.out.println("The Area of the sphere is: " + s.areA());
        System.out.println("The Volume of the sphere is: " + s.volumE());

    }
}
