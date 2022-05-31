import java.applet.*;
import java.awt.*;

public class myapplet extends Applet {
    string msg="";
    public void init(){
        msg="INIT::";

    }
    public void start(){
        msg+="START::";

    }
    public void paint(Graphics g){
        msg+="PAINT";
        g.drawString(msg, 20, 40);
        g.setColor(color,red);
        g.fillRect(40, 60, 50, 100);
    }

}
