import java.rmi.*;

public interface Sum extends Remote{
    public void add(int n1,int n2)throws
    RemoteException;
}

