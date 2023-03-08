package chapter_09;

abstract class Pen1 {
    abstract public String Write();

    abstract public void read();
};

class FountainPen1 extends Pen1 {
    public String Write() {
        return "Writing";
    }

    public void read() {
        System.out.println("Read Read Read");
    }

    public void changeRefill() {
        System.out.println("Changing refill");
    }
};

interface BasicAnimalInterface {
    void sleep();

    void eat();
};

class Monkey {
    void jump() {
        System.out.println("Jumping ^_^");
    }

    void run() {
        System.out.println("runnnnnnnnnnn -o-");
    }
};

class Human extends Monkey implements BasicAnimalInterface {
    @Override
    public void sleep() {
        System.out.println("Sleeping zzzzz");
    }

    @Override
    public void eat() {
        System.out.println("Eating mango");
    }

    public void speak() {
        System.out.println("Koooo");
    }
};

abstract class TelePhone12 {
    abstract void ring();

    abstract void lift();

    abstract void disconnect();

};

class SmartPhone21 extends TelePhone12 {
    @Override
    public void ring() {
        System.out.println("ringing.........");
    }

    @Override
    public void lift() {
        System.out.println("lifting!!!");
    }

    @Override
    public void disconnect() {
        System.out.println("Disconnected");
    }
};

interface TVremote {
    void changeChannel();
}

interface SmartTVremote extends TVremote {
    void openAndroidFeature();
}

class TV implements TVremote {
    @Override
    public void changeChannel() {
        System.out.println("Changing channel to Bhakti Channel");
    }
}

public class pset_01 {
    public static void main(String[] args) {
        // Q1 Create an abstract class Pen1 with methods write() &
        // read as abstract methods.

        // Q2 Use the class Pen from Q1 to create a concrete class
        // FountainPen1 with additional method changeRefill().

        // Q3 Create a monkey class with jump() & run() methods. Create a class
        // human which inherits this monkey class & implements BasicAmimal interface
        // with eat() & sleep() methods.

        // Q4 Create a class TelePhone with ring(), lift() & disconnect()
        // abstract methods & demonstrate polymorphism.
        TelePhone12 t12 = new SmartPhone21();
        t12.disconnect();
        t12.ring();
        t12.lift();

        // Q5 Demonstrate Polymorphism using monkey class from Q3
        Monkey m = new Human();
        m.jump();
        m.run();

        BasicAnimalInterface b = new Human();
        b.eat();
        b.sleep();

        // Q6 Create a interface TVremote & use it to inherit
        // another interface SmartTV

        // Q7 Create a class TV which implements TVremote from Q6
        TV tv = new TV();
        tv.changeChannel();
    }
}
