package chapter_09;

public class Access {
    static public int x;
    static public int a = 5;
    static protected int b = 10;
    static int c = 6;
    static private int d = 12;

    static public void print(int y) {
        a = y;
        System.out.println("public: " + a);
        System.out.println("protected: " + b);
        System.out.println("default: " + c);
        System.out.println("private: " + d);

    }

    public static void main(String[] args) {
        print(12);
    }
};
