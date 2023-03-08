package chapter_10;

import java.lang.Thread;

class Th extends Thread {
    // methods runs the thread
    public void run() {
        System.out.println("run " + this.getName());
    }

    // methods to provide a name to the Thread
    public Th(String name) {
        super(name);
    }
}

public class ThreadPriority {
    public static void main(String[] args) {
        /*
         * -> JVM defines a range of ten logical priority
         * java.lang.Thread.MIN_PRIORITY = 1;
         * java.lang.Thread.NORM_PRIORITY = 5;
         * java.lang.Thread.MAX_PRIORITY = 10;
         */

        // Giving priorities to the threads
        Th t1 = new Th("Thread_1MostPri");
        Th t2 = new Th("Thread_2");
        Th t3 = new Th("Thread_3");
        Th t4 = new Th("Thread_4");
        Th t5 = new Th("Thread_5");

        t1.setPriority(Thread.MAX_PRIORITY);
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
    }
}