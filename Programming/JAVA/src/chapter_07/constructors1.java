package chapter_07;

class MyEmployee3 {
    private int id;
    private String name;
    private float salary;

    // Constructor
    public MyEmployee3() {
        id = 12;
        name = "MYEMPLOYEE";
    }

    // Paramterized constructor
    public MyEmployee3(String n, int i) {
        id = i;
        name = n;
    }

    // Constructor Overloading
    public MyEmployee3(String mm) {
        name = mm;
    }

    public MyEmployee3(int e) {
        id = e;
    }
    public MyEmployee3(float f) {
        salary=f;
    }

    // More Methods
    public void setName(String n) {
        this.name = n;
    }

    public String getName() {
        return name;
    }

    public void setId(int n) {
        this.id = n;
    }

    public int getId() {
        return id;
    }
    public float getSalary() {
        return salary;
    }
};

/*
 * Constructor is same as the class Name
 * - It is used to initialize an object
 * - Has no return value
 * - No need to call exlpicitly
 */
public class constructors1 {
    public static void main(String[] args) {

        MyEmployee3 m = new MyEmployee3();

        // Default Constructors
        System.out.println("Running default Constructor\nName: " + m.getName());
        System.out.println("Id: " + m.getId());

        m.setName("Rahul");
        System.out.println("\nThe name is: " + m.getName());
        m.setId(12);
        System.out.println("The Id of the employee is: " + m.getId());

        // Parameterized constructors
        MyEmployee3 m1 = new MyEmployee3("Raju", 124);
        System.out.println("\nParameterized constructor\nName: " + m1.getName());
        System.out.println("Id : " + m1.getId());

        // Quick Quiz:
        MyEmployee3 w=new MyEmployee3(3434.34f);
        System.out.println("\nSalary: "+w.getSalary());
    }
}
