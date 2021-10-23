import java.rmi.*;
import java.rmi.registry.*;

public class MyClient {
    public static void main(String[] args) {
        try{
            sum stub=(sum)Naming.lookup("rmi://localhost:5400/abc");
            System.out.println(stub.add(10,20));
        }   
        catch(Exception e){
            System.out.println(e);
        }
    }
}
