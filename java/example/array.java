import java.util.Arrays;
public class array {

    public static void main(String[] args) {
        int source[] = { 12, 1, 5, 2, 16, 14, 18, 20, 25 };
        int dest[] = Arrays.copyOfRange(source, 3, 7);
        //boolean result = Arrays.equals(source,dest);
        //System.out.print(result+"\n");
        System.out.println(Arrays.toString(dest));
        System.out.println(Arrays.binarySearch(dest,13));
        //if (result)
          //  System.out.println("hellow world");
    }
    
}
