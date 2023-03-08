package chapter_07;

public class ClassInsideClass {
    static class Demo
    {
        public void show()
        {
            System.out.println("Demo");
        }
    }
    public static void main(String[] args){
        Demo d =new Demo();
        d.show();
    }
}


