import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

import java.sql.*;

class Home1 extends Frame implements ActionListener {

    JButton btnShow;
    Checkbox cboxPost,cboxSalary;
    CheckboxGroup cb=new CheckboxGroup();
    JTextField txtValue;

    Home1() {
        cboxPost=new Checkbox("Post",cb,false);
        cboxSalary=new Checkbox("salary",cb,false);
        txtValue=new JTextField(10);
        btnShow=new JButton("show List");
            setLayout(new FlowLayout());
            add(cboxPost);
            add(cboxSalary);
            add(txtValue);
            add(btnShow);
            setSize(500,300);
            setVisible(true);
            setTitle("home");
            btnShow.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localHost:3306/javadelete", "root", "");
            Statement st = con.createStatement();
            String query = "";
            if (cboxPost.getState() == true)

                query = "select * from info where post='" + txtValue.getText() + "'";

            else if (cboxPost.getState() == true)                               
                query = "select * from info where post='" + txtValue.getText() + "'";

            else
                query = "select * from info";
            ResultSet rs = st.executeQuery(query);
            while (rs.next()) {
                System.out.println(rs.getString("empid") + " " + rs.getString("name") + " " + rs.getString("post") + " "
                        + rs.getString("salary"));
            }
            System.out.println("------------------------------------------------------------------");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public static void main(String aa[]) {
        new Home1();
    }
}