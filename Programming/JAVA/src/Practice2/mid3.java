package Practice2;

import java.awt.Frame;
import java.awt.event.WindowListener;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.Button;
import java.awt.Label;
import java.awt.TextField;

class GUI extends Frame implements WindowListener, ActionListener{
    Frame obj;

    public GUI(){
        obj=new Frame("GUI");

        Label avg=new Label("Average");
        avg.setBounds(20,30,50, 30);

        Label g=new Label("Grade");
        g.setBounds(20,60,50, 30);

        TextField t1=new TextField();
        t1.setBounds(80,30,100,30);

        TextField t2=new TextField(" ");
        t2.setBounds(80,60,100,30);
        t2.setEditable(false);

        Button b=new Button("Calculate Grade BUTTON1");
        b.setBounds(20,120,150,30);

        b.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e)
            {
                double n=Double.parseDouble(t1.getText());
                if(n>=91 && n<=100){
                    t2.setText("AA");
                }
                else if(n>=81 && n<=90){
                    t2.setText("AB");
                }
                else if(n>=71 && n<=80){
                    t2.setText("BB");
                }
                else if(n>=61 && n<=70){
                    t2.setText("BC");
                }
                else if(n>=51 && n<=60){
                    t2.setText("CD");
                }
                else if(n>=41 && n<=50){
                    t2.setText("DD");
                }
                else if(n>=0 && n<=40){
                    t2.setText("Fail");
                }
                else{
                    t2.setText("Error");
                }
            }
        });
        obj.add(avg);
        obj.add(g);
        obj.add(t1);
        obj.add(t2);
        obj.add(b);

        obj.setLayout(null);
        obj.setSize(400,300);
        obj.setVisible(true);

        obj.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e)
            {
                obj.dispose();
            }
        });
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        System.out.println("Action Performed");
    }

    @Override
    public void windowOpened(WindowEvent e) {
        System.out.println("Window Opened");
    }

    @Override
    public void windowClosing(WindowEvent e) {
        System.out.println("Window Closing");
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
public class mid3 {
    public static void main(String[] args){
        new GUI();
    }
}

