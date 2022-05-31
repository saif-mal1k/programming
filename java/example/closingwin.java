import java.awt.*;
import java.awt.event.*;
import javax.swing.JFrame;

class JWin extends JFrame{
    JWin(){

        setSize(300,400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String as[]) {
        new JWin();
    }
}