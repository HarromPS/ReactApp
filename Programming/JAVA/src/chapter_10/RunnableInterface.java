package chapter_10;
import java.lang.Thread;

// Syntax:
class RunnerClass1 implements Runnable
{
    public void run(){
        int i=1;
        while(i<11){
            System.out.println("Thread 1 is running ...");
            i++;
        }
    }
};
class RunnerClass2 implements Runnable
{
    public void run(){
        int i=1;
        while(i<11){
            System.out.println("Thread 2 is running ...");
            i++;
        }
    }
};
public class RunnableInterface {
    public static void main(String[] args){
        // e.g: like gun & bullet
        RunnerClass1 bullet_1=new RunnerClass1();
        Thread gun1=new Thread(bullet_1); // gun loaded with bullet
        // Prividing thread a runner

        RunnerClass2 bullet_2=new RunnerClass2();
        Thread gun2=new Thread(bullet_2);   // gun loaded with bullet

        // Shooting the bullet
        gun1.start();
        gun2.start();

        // Life Cycle of Thread
        // 1) New  -> new instance of a thread
        // 2) Runnable -> after invoke start(), it is selected by 
        // thread schedular to run until then it is blocked
    }   
}
