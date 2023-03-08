package chapter_09.subfolder_accessModifiers;

import chapter_09.Access;

// To access the fields of the imported classes
// Derive the Class as
class Extends extends Access {
    int x;

    // Fields are accessed with the help of methods of the classes
    public void print2() {
        x = 10;
        System.out.println(a); // public
        System.out.println(b); // protected
        // System.out.println(c); // default
        // System.out.println(d); // private
    }
};

public class Get {
    public static void main(String[] args){
        // In other package
        // Access A = new Access();
        System.out.println(Access.x);
        // System.out.println("\npublic: "+A.a);   // public
        // System.out.println("protected: "+A.b);  // protected
        // System.out.println("default: "+A.c);    //default
        // System.out.println("default: "+A.d);    // private
        // A.print(1);

        Extends e =new Extends();
        e.print2();

    }
}
