import java.rmi.*;

public interface sum extends Remote{
    public int add(int n1,int n2) throws RemoteException;
}
