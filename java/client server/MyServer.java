
import java.net.*;
import java.io.*;

public class MyServer{

    public static void main(String aa[]) {
        try{
            ServerSocket s=new ServerSocket(8080);
        Socket socket=s.accept();
        DataOutputStream ds=new DataOutputStream(socket.getOutputStream());
        ds.writeBytes("hellow");
        ds.flush();
        s.close();
        }
        catch(Exception e){
            System.out.println(e.getMessage());           
        }
    }
}