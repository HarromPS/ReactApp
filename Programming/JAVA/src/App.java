// import java.net.InetAddress;
// import java.net.UnknownHostException;

public class App {
    // public App(){}
    // public App(this (1,2)){
    int a;

    public double returN() {
        a=12;
        return (double) a;
    }

    public static void main(String[] args) {
        System.out.println("Hello world");
        long a = 122L;
        System.out.println(a);
        App A = new App();
        System.out.println(A.returN());
    }
}
