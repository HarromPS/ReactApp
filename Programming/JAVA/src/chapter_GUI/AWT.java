package chapter_GUI;
/* Java AWT => Abstract Window ToolKit
1) to develop window based or gui based application
 */

// 1st step -> FRAME
// import java.awt.*;
import java.awt.Frame;
import java.awt.Label;
import java.awt.Button;
import java.awt.Color;
import java.awt.Checkbox;
import java.awt.TextField;
import java.awt.TextArea;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
// import java.awt.event.WindowAdapter;
// import java.awt.Window.addWindowListener


// class NewGUI extends Frame
// {
//     // A) By extending the Frame class
//     // constructor to instantiate the frame
//     public NewGUI(){
//         setSize(400,300);

//         setVisible(true);
//     }
// }
class NewGUI implements WindowListener, ActionListener
{
    Frame frame_obj;
    Label l;
    // B) By creating the frame_objects of  class
    // constructor to instantiate the frame
    public NewGUI(){
        // Frame frame_obj=new Frame();

        // title constructor
        frame_obj=new Frame("GUIapp");

        TextField tfield=new TextField("Enter some inputs");
        tfield.setBackground(Color.orange);
        tfield.setForeground(Color.black);
        tfield.setBounds(70, 42, 145, 25);

        l =new Label("Label");
        l.setBackground(Color.black);
        l.setForeground(Color.white);
        l.setBounds(20,70,170,25);

        // Buttons
        Button b=new Button("Button");
        // b.setBounds();
        b.setBackground(Color.red);
        b.setForeground(Color.white);
        b.setBounds(20, 40, 45, 25);

        // TextArea
        TextArea tA=new TextArea("");
        tA.setBounds(20,120,200,200);

        // CheckBox
        Checkbox c=new Checkbox("Option 1");
        c.setBounds(400,100,60,30);

        Checkbox c2=new Checkbox("option 2");
        c2.setBounds(400,120,60,30);
        // Actions (using addactionListener)
        // 1) Button
        Button b1=new Button("Click me");
        b1.setBounds(180,70,80,30);

        // b1.addActionListener(new ActionListener(){
        //     @Override
        //     public void actionPerformed(ActionEvent e)
        //     {
        //         l.setText("The button is clicked");
        //     }
        // });

        frame_obj.add(c);
        frame_obj.add(c2);
        frame_obj.add(b1);
        frame_obj.add(b);     // add button to frame
        frame_obj.add(l);     // add label
        frame_obj.add(tfield);
        frame_obj.add(tA);
        frame_obj.setLayout(null);    // no layout
        frame_obj.setSize(700,400);
        frame_obj.setVisible(true);

        frame_obj.addWindowListener(this);
        b1.addActionListener(this);
    //     // closing the window METHOD 1
    //     frame_obj.addWindowListener(new WindowAdapter()
    //     // frame_obj.addWindowListener(new WindowAdapter()
    //     {
    //         @Override
    //         public void windowClosing(WindowEvent e)
    //         {
    //             // super.windowClosing(e);
    //             frame_obj.dispose();
    //         }
    //     });
    }

    // METHOD 2 outside the constructor
    @Override
    public void windowClosing(WindowEvent e) {
       Frame f = (Frame)e.getSource();
       f.dispose();
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        l.setText("Clicked Outside constructor");
        // this.add(l)s;
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
public class AWT {
    public static void main(String[] args){
        // Without memory allocation
        System.out.println("Go");
        // new NewGUI();

        // By variable referece to the frame_object
        NewGUI g=new NewGUI();
        g.windowClosed(null);
    }
}
