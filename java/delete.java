import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

class Home extends Frame implements
ActionListener{
    JLabel lblUserId;
    JTextField txtUserId;
    JButton btnDelete;
}
Home(){
    lblUserId=new JLabel("useri id");
    txtUserId=new JTextField(10);
    btnDelete=new JButton("Delete");
    Panel p=new Panel();
        setLayout(new FlowLayout());
        add(lblUserId);
        add(txtUserId);
        add(btnDelete);
        setSize(300,400);
        visible(true);
        titleName("Home");
        btnDelete.addActionListener(this);
public void actionPerformed(ActionEvent ae){
    try{
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localHost:3306/javadelete","root","");
        Statement st=con.createStatement();
        int i=st.executeUpdate("delete from login where userid='"+txtUserId.getText()+"'");
        if(i>0){
            System.out.println(" deleted");
            txtUserId.setText("");
        }
        else
            System.out.println("not deleted");
    }
        catch (Exception e){
            System.out.println(e);
        }
}
    public static void main(String aa[]) {
        new Home();
        
    }
}