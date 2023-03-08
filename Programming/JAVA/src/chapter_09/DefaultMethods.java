/**
 * @author Hariom
 * @version 0.1
 * @see Java Docs
 * @since 2023
 */
package chapter_09;

interface Camera {
    /**
     * Represents the snap taking method prototype
     *
     */
    void takeSnap();

    /**
     * Represents the video taking method prototype
     *
     */
    void takeVideo();

    // private methods can be included in default methods if the logic of
    // default methods gets too large
    // it can be shorterned in private methods & can be called in default method

    /**
     * Represents the greet method
     *
     */
    private void greet() {
        System.out.println("Hello");
    }

    // default method
    /**
     * Represents the 4k video recording method prototype
     *
     */
    default void get4Kvideo() {
        greet();
        System.out.println("Default 4k video method");
    }
}

interface Wifi {
    /**
     * Represents the String array of networks
     *
     */
    String[] getNetworks();

    /**
     * Represents the connect to network method prototype
     *
     */
    void connectToNetwork(String Network);
}

class CellPhone {

    /**
     * @param phoneNo is a parameter of method
     */
    // just receive call & dial call
    /**
     * Represents the dial number method defination
     *
     */
    public void dialNumber(int phoneNo) {
        System.out.println("Dialing the number +91" + phoneNo);
    }

    /**
     * Represents the receive number method defination
     *
     */
    public void receiveNumber() {
        System.out.println("Incoming call.....");
    }
};

// must implement all the methods of the interfaces implementing
// else error & add public (public to private visibility not allowed)

/**
 * Represents CellPhone class is inhereited by the SmartPhone class
 *
 */
class SmartPhone extends CellPhone implements Camera, Wifi {

    // Default Methods -> just like default methods , default parameters
    // Methods are also default defined in interfaces

    // if redefined, default method gets override
    // public void get4Kvideo()
    // {
    // System.out.println("Redefined 4k video method");
    // }

    /**
     * Represents the take snap method is overridden  defined
     *
     */
    @Override
    public void takeSnap() {
        System.out.println("Take Snap");
    }

    /**
     * Represents take Video method is overridden  defined
     *
     */
    @Override
    public void takeVideo() {
        System.out.println("Taking video::::");
    }

    /**
     * Represents getNetworks method is overridden  defined
     *
     */
    @Override
    public String[] getNetworks() {
        System.out.println("Getting List of networks...");
        String[] str = { "Jio", "Airtel", "BSNL", "idea", "Vi" };
        return str;
    }

    /**
     * Represents connect To Network is overridden and defined
     *
     */
    @Override
    public void connectToNetwork(String Network) {
        System.out.println("connecting to netWork..." + Network);
    }
};

public class DefaultMethods {
    /** Represents getNetworks method is overridden and defined */
    public void sum() {
        System.out.println("Sum");
    }

    /**
     * Represents getNetworks method is overridden and defined
     *
     */
    public void add() {
        System.out.println("add");
    }

    /**
     * Represents getNetworks method is overridden and defined
     *
     */
    public void sub() {
        System.out.println("sub");
    }

    public static void main(String[] args) {
        SmartPhone sp = new SmartPhone();
        sp.get4Kvideo();
        String[] s = sp.getNetworks();
        for (String i : s) {
            System.out.print(i + "    ");
        }
    }
}
