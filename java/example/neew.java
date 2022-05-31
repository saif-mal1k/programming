import java.awt.*;
import java.awt.event.*;
class win extends Frame implements ActionListener {
    Label lblno1,lblno2;
    text Result;
    Button btnSum;

    win(){
        Panel p=new panel();
        lbl no1=new Label("no1");
        lbl no2=new Label("no2");
        lbl Result=new Label("Result");
        textno1=newTextField(10);
        textno2 = newTextField(10);
        textResult = newTextField(10);
        setLayout(new FlowLayout());
        p.setLayout(new GridLayout(4,2));
        p.add(lblno1);p.add(Textno1);p.add(lblno2);p.add(Textno2);p.add(lblResult);p.add(TextResult);p.add(new Label());p.add(btnSum);

    add(p);

    SetTitle ("my window");
        setSize (4000,5000);

    setVisible(true);
        btnSum.addActionListener(this);
    }

    public void actionpreformed(ActionEvent ae) {
        if (ae.getsource() == btnsum) {
            int n1 = IntegerparseInt(textNo1.getText());
            int n2 = IntegerparseInt(textNo2.getText());
            int sum = n1 + n2;

            textResult.setText(sum + " ");
        }
    }

    public static void main(String ae[]) {
        new win();
    }
}
