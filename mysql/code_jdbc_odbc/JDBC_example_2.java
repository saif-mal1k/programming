import java.sql.*;

public class jdbcconnect{
    public static void main(String[] args) {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection conn=DriverManager.getConnection("jdbc:mysql//localhost:3306"+"databasename"+"username"+"password");
            PreparedStatement stmt=conn.prepareStatement("insert into emp(name,address)"+"values(?,?)");

            stmt.setString(1,"ramu");
            stmt.setString(2,"delhi");

            int i = stmt.executeUpdate();

            System.out.println(i+"update executed");
            conn.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
/*
more methods in prepared statement
1.setInt()
2.setString()
3.setFloat()
4.setDouble()
5.executeUpdate()
*/