package chapter_10;

class THR extends Thread {
    public void run() {
        int i = 1;
        while (i < 6) {
            System.out.println("Thread Running " + this.getName());
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            i++;
        }

    }

    public THR(String Name) {
        super(Name);
    }
}

public class ThreadMethods {
    public static void main(String[] args) {
        THR t1 = new THR("Thread_1");
        THR t2 = new THR("Thread_2");
        // THR t3 = new THR();

        // THR t4 = new THR();

        t1.start();
        // 1) thread.join() -> joins two threads
        // t2 will start when t1 ends => both threads will not
        // run parallely
        // try {
        //     t1.join();
        // } catch (Exception e) {
        //     System.out.println(e);
        // }
        System.out.println("\nNext Thread is running after thread 1");
        t2.start();
    }
}
