package chapter_10;
import java.lang.Thread;
/*
MultiThreading In Java: 
=> within a process doing multitasking
=> threads are the parts of a process & shares a memory of a process
=> light-weighted processes within a process
=> uses shared memory area of a process
 */


// Syntax:
class A211 extends Thread {
    @Override
    public void run()
    {
        int i=0;
        while(i<10)
        {
            System.out.println("Progress A: "+i+"%");
            i++;
        }
    }
};

class B322 extends Thread {
    @Override
    public void run()
    {
        int i=0;
        while(i<10)
        {
            System.out.println("Progress B: "+i+"%");
            i++;
        }
    }
};

public class Multithreading {
    // public void sum(int a, int b) { // parameters are passed to a function
    //     sum(12, 23); // Arguments are actual
    // }

    public static void main(String[] args) {
        A211 a= new A211();
        B322 B=new B322();
        a.start();
        B.start();
    // }
    }
}
