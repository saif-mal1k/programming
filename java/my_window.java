import java.awt.*;

class Win extends Frame{  Win(){
    setLayout(new FlowLayout());
    Label lbl=new Label("your Name");
    TextField tf=new TextField(10);
    Button btn=new Button("click me");
    Checkbox chkbox=new Checkbox("10");
    add(lbl);
    add(tf);
    add(chkbox);
    add(btn);
    setTitle("my window");
    setSize(400,400);
    setVisible(true);
  }
  public static void main (String aa[]){
    new Win();
  }
}
