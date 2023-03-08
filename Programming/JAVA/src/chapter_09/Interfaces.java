package chapter_09;

// defining the interface 
// like a template as a class
// Are default by default 
interface Bicycle {
    int a = 45; // field

    void applyBrakes(int decrement); // method signature must be defined in the implemented class

    void speedUp(int incerement);
}

// In Java, Multiple inheritance is not allowed, but
// the similar concept can be achieved using Interfaces.
/*
 * 1) A class can implement multiple Interfaces at the same time
 * the class can be extended i.e inherited.
 * 2) Intrerfaces in java is bit like classes, but interfaces can only have 
 * constant fields, methods & default methods.
 * 3) The methods need to be defined when the interfaces are implemented
 */
interface Lights {
    void frontLightsOn();

    void frontLightsOff();

    void BackLightsOn();

    void BackLightsOff();
}

// implementing the interfaces in the classes
class Hero implements Bicycle, Lights {
    // int a=12; the field gets override if the same name variable is used
    // in theclass defination
    int speed = 100;

    public void applyBrakes(int decrement) {
        speed -= decrement;
        System.out.println("Applying Brakes, speed: " + speed);
    }

    public void speedUp(int incerement) {
        speed += incerement;
        System.out.println("Speeding UP, speed: " + speed);
    }

    public void frontLightsOn() {
        System.out.println("Front Lights ON");
    }

    public void BackLightsOn() {
        System.out.println("Back Lights ON");
    }

    public void frontLightsOff() {
        System.out.println("Front Lights OFF");
    }

    public void BackLightsOff() {
        System.out.println("Front Lights OFF");
    }

    // its own function
    public void blowHorn() {
        System.out.println("Peeeep, pitch: " + a);
    }
};

public class Interfaces {
    public static void main(String[] args) {
        // Interfaces => All the methods are empty bodied(all are like abstract methods)
        // => only declared

        // Abstract class Vs Interfaces
        // We cannot make a class derived from multiple classes
        // Using multiple Interfaces we can create a class

        Hero h = new Hero();
        // Prpoerties in the interfaces can be created
        h.applyBrakes(20);
        h.speedUp(3);

        // Properties in interfaces cannot be modified as they are final
        // h.a = 12; The final field Bicycle.a cannot be assigned+
        h.blowHorn();
        h.frontLightsOn();
        h.frontLightsOff();
        h.BackLightsOn();
        h.BackLightsOff();

        // Like abstract, i.e its objects are not created, just used as Base class
        // Public by default
        // Bicycle b =new Bicycle() {
        // };

    }
}
