import java.awt.*;
import java.awt.event.*;

/*import jdk.internal.org.jline.terminal.MouseEvent.Button;*/

class win extends Frame implements ActionListner{
    Label lbl=new Label("your Name");
    TextField tf=new TextField(20);
    Button btn=new Button("click me");
    Button chkbox=new Button("Bye");
    Button btn2=new Button("Bye");
    win(){
      setLayout(new FlowLayout());
      add(lbl);
      add(tf);
      add(chkbox);
      add(btn);
      add(btn2);
      setTitle("my window");
      setSize(300,400);
      setVisible(true);
      btn.addActionListener((ActionListener) this);
      btn2.addActionListener((ActionListener) this);
    }
    public Void actionPerformed(ActionEvent ae){
      if (ae.getSource()==btn)
      tf.setText("Hellow...,SALMAN");
      else
      if(ae.getSource()==btn2)
        tf.setText("Bye.....|");
    }
    public static void main(String aa[]){
      new win();
    }

}
