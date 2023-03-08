package chapter_09;

/* Polymorphism 
    class phone --> class SmartPhone
    interface GPS/camera/MediaPlayer --> class SmartPhone

    ==> GPS g = new SmartPhone();
    SmartPhone can be used as a GPS but can accsess GPS methods
    only & not access camera/mediaplayer methods/fields or any other method

    ==> SmartPhone S = new SmartPhone();
*/

interface Camera2 {
    void takeShot();

    void recordShot();

    private void share() {
        System.out.println("Sharing....");
    }

    default void recordVideo() {
        share();
        System.out.println("Recording started....");
    }
}

interface Wifi3 {
    String[] getNetworks();

    void connectToNetworks();
}

class CellPhone2 {
    // just for calling & receiving the calls
    public void dialNumber(int phoneNo) {
        System.out.println("Calling....+91" + phoneNo);
    }

    public void receiveCall() {
        System.out.println("Connecting.....");
    }
};

class SmartPhone2 extends CellPhone2 implements Camera2, Wifi3 {
    @Override
    public void takeShot() {
        System.out.println("Smile taking picture");
    }

    @Override
    public void recordShot() {
        System.out.println("Recording started....");
    }

    @Override
    public String[] getNetworks() {
        System.out.println("Getting list of Networks");
        String[] str = { "Jio", "Vi", "Airtel", "Idea", "Docomo" };
        return str;
    }

    @Override
    public void connectToNetworks() {
        System.out.println("Connecting to a network .....");
    }

};

public class Polymorphism {
    public static void main(String[] args) {
        Camera2 cam1 = new SmartPhone2();

        // Camera interface can only use its own methods only
        // cam1.getNetworks(); Not Allowed
        // cam1.connectToNetworks();
        // cam1.dialNumber();

        cam1.takeShot();
        cam1.recordShot();
        cam1.recordVideo();

        Wifi3 w = new SmartPhone2();
        for (String item : w.getNetworks()) {
            System.out.println(item);

        }
        w.connectToNetworks();

        SmartPhone2 s = new SmartPhone2();
        s.dialNumber(922342131);
        s.receiveCall();
        s.recordShot();
        s.recordVideo();
        s.getClass();
        s.getNetworks();
    }

};