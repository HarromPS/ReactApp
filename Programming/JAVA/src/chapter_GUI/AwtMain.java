package chapter_GUI;

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
// import java.awt.event.WindowListener;

public class AwtMain {
    public static void main(String[] args) {
        Frame f=new Frame("MainGUI");
        Button b=new Button("Click");
        b.setBounds(165,160,50,40);
        f.add(b);
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);

        f.addWindowListener(new WindowAdapter(){
            @Override
            public void windowClosing(WindowEvent e)
            {
                System.out.println("Window Closing");
                f.dispose();
            }
            @Override
            public void windowClosed(WindowEvent e)
            {
                System.out.println("Window Closed");
            }
            @Override
            public void windowOpened(WindowEvent e)
            {
                System.out.println("Window Opened");
            }
            @Override
            public void windowDeactivated(WindowEvent e)
            {
                System.out.println("Window Deactivated");
            }
            @Override
            public void windowActivated(WindowEvent e)
            {
                System.out.println("Window Activated");
            }
            @Override
            public void windowIconified(WindowEvent e)
            {
                System.out.println("Window Iconified");
            }
            @Override
            public void windowDeiconified(WindowEvent e)
            {
                System.out.println("Window Deiconified");
            }
        });
    }
}
