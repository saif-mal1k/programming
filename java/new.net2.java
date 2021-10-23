
import java.net.*;
import java.io.*;

public class MyServer(){

    public static void main(string aa[]) {
        try{
            ServerSocket s=new ServerSocket(5500);
        Socket socket=s.accept();
        DataOutputStream ds=new DataOutputStream(s.getOutputStream());
        ds.write("hellow");
        ds.flush();
        s.close();
        }
        catch(Exception e){
            System.out.println(e);           
        }
    }
}