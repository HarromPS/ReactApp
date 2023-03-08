package chapter_GUI;

// all correct
import java.awt.*;
import java.awt.event.WindowEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowListener;

class GUI extends Frame implements WindowListener {

    public GUI() {
        Button b = new Button("Click here");
        b.setBounds(20, 40, 100, 30);
        add(b);

        setTitle("GUi");
        setSize(400, 300);
        setLayout(null);
        setVisible(true);
        // closing the frame
        addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                Frame f = (Frame) e.getSource();
                f.dispose();
            }

            @Override
            public void windowOpened(WindowEvent e) {
                System.out.println("Window Opened");
            }

            @Override
            public void windowClosed(WindowEvent e) {
                System.out.println("Window Closed");
            }

            @Override
            public void windowIconified(WindowEvent e) {
                System.out.println("Window Iconified");
            }

            @Override
            public void windowDeiconified(WindowEvent e) {
                System.out.println("Window Deiconified");
            }

            @Override
            public void windowActivated(WindowEvent e) {
                System.out.println("Window Activated");
            }

            @Override
            public void windowDeactivated(WindowEvent e) {
                System.out.println("Window Deactivated");
            }
        });
    }

    @Override
    public void windowClosing(WindowEvent e) {
        System.exit(0);
    }

    @Override
    public void windowOpened(WindowEvent e) {
        System.out.println("Window Opened");
    }

    @Override
    public void windowClosed(WindowEvent e) {
        System.out.println("Window Closed");
    }

    @Override
    public void windowIconified(WindowEvent e) {
        System.out.println("Window Iconified");
    }

    @Override
    public void windowDeiconified(WindowEvent e) {
        System.out.println("Window Deiconified");
    }

    @Override
    public void windowActivated(WindowEvent e) {
        System.out.println("Window Activated");
    }

    @Override
    public void windowDeactivated(WindowEvent e) {
        System.out.println("Window Deactivated");
    }
}

public class AwtMethod2 {
    public static void main(String[] args) {
        System.out.println("Gp");
        new GUI();
    }
}
