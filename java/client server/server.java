import java.rmi.*;
import java.rmi.registry.*;

public class server {
    public static void main(String aa[]){
        try{
            sum stub=new SumImpl();
            Naming.rebind("rmi://localhost:5400/abc", stub);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
