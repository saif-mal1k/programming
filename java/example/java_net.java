
import java.net.*;
import java.io.*;

public class MyServer(){
    public static void main(string aa[]) {
        try{
            ServerSocket s=new ServerSocket(5500);
        Socket socket=s.accept();
        DataInputStream ds=new DataInputStream(socket.getInputStream());
        String message=(String)ds.read();
        System.out.println(message);
        s.close();
        }
        catch(Exception e){
            System.out.println(e);           
        }
    }
}