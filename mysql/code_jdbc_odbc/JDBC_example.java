import java.sql.*;

import java.sql.*;

public class jdbcconnect{
    public static void main(String[] args) {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection conn=DriverManager.getConnection("jdbc:mysql//localhost:3306"+"databasename"+"username"+"password");
            Statement stmt=conn.createStatement();
            ResultSet rs=stmt.executeQuery("select * from employee where eid=5");

            while(rs.next())
            System.out.println(rs.getInt(1)+" "+rs.getString(5));
            conn.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}