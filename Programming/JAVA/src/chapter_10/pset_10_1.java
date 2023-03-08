package chapter_10;

import java.lang.Thread;

class run_class1 extends Thread {
    @Override
    public void run() {
        int i = 0;
        while (i < 10) {
            // System.out.println(this.getName());
            try {
                Thread.sleep(200);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("welcome");

            i++;
        }
    }

    // public run_class1(String name){
    // super(name);
    // }
}

class run_class2 extends Thread {
    @Override
    public void run() {
        int i = 0;
        while (i < 10) {
            System.out.println("good-morning");
            i++;
        }
    }

    // public run_class2(String name){
    // super(name);
    // }
}

public class pset_10_1 {
    public static void main(String[] args) {
        // Q1 WAP to print "good morning" & "welcome" continuously
        // on screen in java using thread
        run_class1 r1 = new run_class1();
        run_class2 r2 = new run_class2();

        // should be accessed in a static way only
        // try {
        // r1.sleep(200);
        // } catch (InterruptedException e) {
        // e.printStackTrace();
        // }

        System.out.println("status of r1: " + r1.getState());
        System.out.println("status of r2: " + r2.getState());
        r1.start();
        r2.start();

        // Q2 Add a sleep() method in Q1 to delay the execution
        // of welcome for 200 ms.

        // Q3 Demonstrate getPriority & setPriority() methods
        // in java threads.
        r1.setPriority(4);
        r2.setPriority(6);
        System.out.println("The priority of r1 is: " + r1.getPriority());
        System.out.println("The priority of r2 is: " + r2.getPriority());

        // Q4 How do get the status of a thread in java?
        System.out.println("status of r1: " + r1.getState());
        System.out.println("status of r2: " + r2.getState());

        // Q5 Reference to the current thread
        System.out.println("The reference of the current thread is: "+Thread.currentThread());
        System.out.println("The reference of the current thread + state is: "+Thread.currentThread().getState());
    }

}