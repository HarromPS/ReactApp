// package chapter_13;
package Practice;
import java.util.ArrayList;

// Generic class
class A<T, T2> {
    int val;
    T v1;
    T2 v2;

    public A(int v, T t, T2 t2) {
        this.val = v;
        this.v1 = t;
        this.v2 = t2;
    }
    public A(T t, T2 t2) {
        this.v1 = t;
        this.v2 = t2;
    }

    public A( ) {
    }

    public int getVal() {
        return val;
    }

    public void setVal(int v) {
        this.val = v;
    }

    public T getv1() {
        return v1;
    }

    public void setv1(T t) {
        this.v1 = t;
    }

    public T2 getv2() {
        return v2;
    }

    public void setv2(T2 t) {
        this.v2 = t;
    }
}

public class Generics {
    /*
     * -> Just similar to C++ templates
     */
    public static void main(String[] args) {
        // @SuppressWarnings("unchecked")
        // ArrayList list =new ArrayList();

        // // adding random datatypes
        // list.add("String");
        // list.add(12);
        // list.add(1.3F);

        // int c=list.get(1); // returning a object but containing in a integer
        // soln=> typecasting

        // int c=(int)list.get(1);
        // System.out.println(c);

        // To reduce typesafety we use generics-> general programming
        // i.e of same type
        ArrayList<Integer> list2 = new ArrayList<Integer>();

        // ArrayList<int> list3=new ArrayList<Integer>();
        // Not allowed in java Generics

        list2.add(12);

        A<Integer, String> g = new A<Integer,String>(10, "String");
        Integer str = g.getv1();
        String t = g.getv2();
        System.out.println("String generic " + str);
        System.out.println("Integer generic " + t);
        // int we='A';
        // System.out.println(we);
    }
}
