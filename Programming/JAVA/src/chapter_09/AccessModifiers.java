package chapter_09;

class c1{
    public int a = 5;
    protected int b = 10;
    int c = 6;
    private int d = 12;
    public void print(){
        System.out.println("public: "+a);
        System.out.println("protected: "+b);
        System.out.println("default: "+c);
        System.out.println("private: "+d);
    }
};

public class AccessModifiers {
    public static void main(String[] args){
        // Access Modifiers -> deterimines whether other classes can use a particular field or inside
        // a particular method.
        c1 A = new c1();
        A.print();
        System.out.println("\npublic: "+A.a);
        System.out.println("protected: "+A.b);
        System.out.println("default: "+A.c);
        // System.out.println("public: "+A.d); private field only access through the class methods
    }
}
