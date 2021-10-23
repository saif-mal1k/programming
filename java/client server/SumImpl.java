import java.rmi.server.*;
import java.rmi.*;

public class SumImpl extends UnicastRemoteObject implements sum {
    public int add(int n1,int n2){
        return n1+n2;
    }
    SumImpl() throws RemoteException{
        super();
    }
}
