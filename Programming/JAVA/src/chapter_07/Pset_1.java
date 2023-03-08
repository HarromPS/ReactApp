package chapter_07;

// outside main's class, clas declaration
class Employee2 {

    // Attributes
    int id;
    int salary;
    String name;

    // Methods
    public void setData(int Id, String Name) {
        id = Id;
        name = Name;
    }

    public void printDetails() {
        System.out.println("The name is: " + name);
        System.out.println("The id is: " + id);
        System.out.println("The salary is: " + salary);
    }

    public int getSalary() {
        return salary;
    }
    public String getName()
    {
        return name;
    }
};

public class Pset_1 {

    // Inside another class declaration
    public class Encapsulation {

    };

    public static void main(String[] args) {
        // OOPs -> Object Oriented Programming
        /*
         * OOps-> tries to map the code instructions to the real
         * world problems & try to solve the real world problems.
         * DRY-> Don't repeat yourself(code reusability,)
         * 
         * class -> application form of a exam having various fields to fill out
         * -> blueprint for creating objects
         * 
         * objects- instantiation of a class
         * -> memory is allocated when the object are created
         * 
         * OOPs treminologies->
         * 1) Data Abstraction-> hiding the internal details (shows essential data)
         * 
         * 2) Encapsulation-> wraps the data into single entity
         * ->means sensitive data can be hidden from the user
         * 
         * 3) Inheritance-> Deriving new things from the existing ones
         * 
         * 4) Polymorphism-> ability to take more than one form
         */
        System.out.println("This is a custom class");

        // Instantiating a new Employee2 Object
        Employee2 E1 = new Employee2();

        // Setting properties using dot(.) operator
        E1.id = 12;
        E1.name = "Aman";

        // Printing the attributes
        // calling the attributes in main using dot(.) operator
        System.out.println("The name of the employee2 is " + E1.name + " & id is " + E1.id);

        // calling methods
        E1.printDetails();
        E1.setData(13, "Rohan");
        E1.printDetails();
        E1.salary = 120;
        System.out.println(E1.getName());

        E1.getSalary();
        E1.printDetails();

    }
};
