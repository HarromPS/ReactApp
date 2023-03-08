package chapter_07;

import java.lang.reflect.*;
import java.io.*;

class A implements Cloneable {
    // override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    public void show() {
        System.out.println("This is a A class");
    }
};

class B {
    public void show() {
        System.out.println("This is a A class");
    }
};

public class objectCreation {
    // public T newInstance() throws InstantiationException, IllegalAccessException,
    // IllegalArgumentException {

    // };

    public class CreateObjectExample5 {
        private String str;

        CreateObjectExample5() {
        }

        public void setName(String str) {
            this.str = str;
        }
    };

    public static void main(String[] args) throws Exception {
        // 1) Using 'new' keyword =>allocates memory in heap(returns reference)
        // like malloc which returns the casted pointer
        // Most basic way to create class object.
        A obj = new A();
        obj.show();

        // 2) Using newInstance() Method of Class class..
        // public T newInstance() throws InstantiationException, IllegalAccessException
        Object o = Class.forName(args[0]).getDeclaredConstructor().newInstance();
        System.out.println("Object Created for: " + o.getClass().getName());

        // try {
        // // creating an instance of Class class
        // Obje cls = Class.forName("a");
        // // creates an instance of the class using the newInstance() method
        // A obj = (A) cls.newInstance();
        // // invoking the show() method
        // obj.show();
        // } catch (ClassNotFoundException e) {
        // e.printStackTrace();
        // } catch (InstantiationException e) {
        // e.printStackTrace();
        // } catch (IllegalAccessException e) {
        // e.printStackTrace();
        // }

        // 3) Using newInstance() constructor method
        // => Also known as reflect way to create a object
        try {
            Constructor<CreateObjectExample5> constructor = CreateObjectExample5.class.getDeclaredConstructor();
            CreateObjectExample5 r = constructor.newInstance();
            r.setName("JavaTpoint");
            System.out.println(r.str);
        } catch (Exception e) {
            e.printStackTrace();
        }

        // 4) Using clone() method -> JVM creates a copy of object to another
        // object but do not creates a new Object
        A obj1 = new A();
        A obj2 = (A) obj1.clone();
        obj2.show();

        // 5)
        // Serilization
        // B emp = new B();
        // Creates a stream and writes the object
        // FileOutputStream fout = new FileOutputStream("B.txt");
        // ObjectOutputStream out = new ObjectOutputStream(Bout);
        // out.writeObject(emp);
        // out.flush();
        // // closes the output stream
        // out.close();

        // Derilization
        // Creating a stream to read the object
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("employee.txt"));
        A e = (A) in.readObject();
        // prints the data of the serialized object
        // closing the input stream
        e.show();
        in.close();
    }
}
