package chapter_07;

// Access Modifiers -> specifies where a property is accessible 
// 1) Private ->
// - accessed within class only 
// - accessed only using class methods

// 2) Default ->
// - do not specified properties are default Default
// - accessed within class, within package only

// 3) Public ->
// - accessed everywhere
// - used to access the private & protected attributes

// 4) Protected ->
// - accessed within class, within package, outside by subclass

class MyEmployee {
    private int Id;
    private String name;

    // Setter methods
    public void setName(String n) {
        // this -> reference to the object calling the method
        this.name = n;
    }

    public void setId(int i) {
        Id = i;
    }

    // Getter methods
    public int getId() {
        return Id;
    }

    public String getName() {
        return name;
    }
};

// Quick Quiz
class Circle2 {
    private double radius;
    private double area;
    private double circumference;

    public void setRadius(double r) {
        radius = r;
    }

    public int isCorrectlySetArea(double a) {
        if (a == (3.14d * radius * radius)) {
            return 1;
        } else {
            return 0;
        }
    }

    public void setArea(double a) {
        if (isCorrectlySetArea(a) == 1) {
            area = a;
        } else {
            System.out.println("Area is incorrect according to the radius");
        }
    }

    public int isCorrectlySetPerimeter(double p) {
        if (p == (2 * radius * 3.14d)) {
            return 1;
        } else {
            return 0;
        }
    }

    public void setPerimter(double p) {
        if (isCorrectlySetPerimeter(p) == 1) {
            circumference = p;
        } else {
            System.out.println("Circumference is incorrect according to the radius");
        }
    }

    public double getArea() {
        return area;
    }

    public double getCircumference() {
        return circumference;
    }
};

public class AccessModifiers {
    public static void main(String[] args) {
        MyEmployee e = new MyEmployee();

        // e.name = "Aman"; // throws error that field is not visible
        // e.Id = 1;

        e.setId(1);
        e.setName("Aman");
        System.out.println("The name is: " + e.getName());
        System.out.println("The Id is: " + e.getId());

        // Quick Quiz: check if the entered area & perimeter for a circle2 is correct A/c
        // to radius
        Circle2 c = new Circle2();
        c.setRadius(4d);
        c.setArea(50.24);
        c.setPerimter(25.12);
    }
}
