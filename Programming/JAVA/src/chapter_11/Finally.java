package chapter_11;

public class Finally {
    public static int greet() {
        try {
            int a = 4;
            int b = 0;
            int c = a / b;
            return c;
        } catch (Exception error) {
            System.out.println(error);
        } finally {
            System.out.println("Finally block executed");
        }
        return 0;
    }

    public static void main(String[] args) {
        // finally block => always runs irrespective the error is handled
        // or not
        int x=greet();
        System.out.println(x);
        int a=1,b=1;
        for(int i=0;i<10;i++)
        {
            // if(i==5)
            // {
            //     b=0;
            // }
            try{
                a=a/b;
            }
            catch(Exception e){
                System.out.println(e);
                System.out.print("Finally");
                break;
            }
            finally{
                System.out.println(", the value of b is: "+b);
            }
            b--;
        }

        // Another 

    }
};