package chapter_10;
import java.lang.Thread;

// Constructors in Thread
/*
1) Thread()
2) Thread(String name) => refers the name of the string
3) Thread(Runnable R) => passing a reference of the object of the class implementing Runner Interface
4) Thread(Runner R,String str) => passing a reference of the object + name of the Thread

 */
class threads extends Thread{
    // name passed to the super class constructor => name of the 
    // thread created
    public threads(String name){
        super(name);    // name =>name of the thread using super class
    }

    // implementing run class
    @Override
    public void run(){
        // int i=1;
        // while(i<=10){
        //     System.out.println("Thread running");
        //     i++;
        // }
        System.out.println("Thread r");
    }
};

class threads_2 implements Runnable{
    @Override
    public void run(){
        System.out.println(Thread.currentThread().getName());
        System.out.println("Runnable implemented");
    }
    // public threads_2(threads_2 runnable,String str){
    //     System.out.println(runnable);
    //     System.out.println(str);
    // }
}
public class Thread_Constructors {
    public static void main(String[] args){
        threads t=new threads("Thread_1");
        threads t2=new threads("Thread_2");
        t.start();
        t2.start();
        // System.out.println("The name of the thread is: "+t.getId()); 
        // getId(); => deprecated => disapproved
        System.out.println("The ID of the thread is: "+t.getName());
        // System.out.println("\nThe ID of the thread is: "+t2.getId());
        System.out.println("The name of the thread is: "+t2.getName());

        threads_2 T1 = new threads_2();
        threads_2 T2 = new threads_2();
        threads_2 T3 = new threads_2();
        threads_2 T4 = new threads_2();
        threads_2 T5 = new threads_2();
        Thread td = new Thread(T1,"Runnable");
        
        // System.out.println("\nThe Id of the Runnable thread is: "+td.getId());
        System.out.println("The name of the Runnable thread is: "+td.getName());
        td.start();

        // A thread group is created in run time
        ThreadGroup tg = new ThreadGroup("Group A");

        // Creating threads 
        Thread x1 = new Thread(tg,T5,"one");
        Thread x2 = new Thread(tg,T2,"two");
        Thread x3 = new Thread(tg,T3,"three");
        Thread x4 = new Thread(tg,T4,"four");

        x1.start();
        x2.start();
        x3.start();
        x4.start();
        System.out.println("The name of the group is: "+tg.getName());
        tg.list();
    }
}
