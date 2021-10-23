import java.sql.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class log extends JFrame implements
ActionListener{
    JLabel lblUserId,lblPassword,lblUserName;
    JTextField txtUserId,txtPassword,txtUserName;
    JButton btnUpdate,btnSearch;
    log(){
        lblUserId=new JLabel("user id");
        lblPassword=new JLabel("password");
        lblUserName=new JLabel("name");
        txtUserId=new JTextField(10);
        txtPassword=new JTextField(10);
        txtUserName=new JTextField(10);
        btnUpdate=new JButton("update");
        btnSearch=new JButton("search");
        Panel p=new Panel();
        p.setLayout(new GridLayout(4,3));
        setLayout(new FlowLayout());
        p.add(lblUserId);
        p.add(txtUserId);
        p.add(btnSearch);
        p.add(lblPassword);
        p.add(txtPassword);
        p.add(new JLabel());
        p.add(lblUserName);
        p.add(txtUserName);
        p.add(new JLabel());
        p.add(new JLabel());
        p.add(btnUpdate);
        add(p);
        setSize(300,300);
        setTitle("login");
        setVisible(true);
        btnUpdate.addActionListener(this);
        btnSearch.addActionListener(this);
    }
    public void  actionPerformed(ActionEvent obj)  {
 
        try{
            Class.forName("com.mysql.jdbc.Driver");
             Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/javademo1","root","");
            Statement stmt =con.createStatement();
              if(obj.getSource()==btnSearch){
                ResultSet rs=stmt.executeQuery("select uname,pasword from login where userid='"+txtUserId.getText()+"'");
                 if(rs.next()){
                    txtPassword.setText(rs.getString("password"));
                    txtUserName.setText(rs.getString(1));
              }
                else{
                    System.out.println("userid not found...!");
                }
         }
            else
                 if(obj.getSource()==btnUpdate){
                    int i=stmt.executeUpdate(
                        "update Login set uname=' "+txtUserName.getText()+"',password='"+txtPassword.getText()+"' where userid='"+ txtUserId.getText()+"'");
                        if(i>0)
                            System.out.println("updated");
                        else
                            System.out.println("not updated");
                }
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
    public static void main(String aa[]){
        new log();
    }
}

