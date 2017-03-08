import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        while(t-- != 0){
            BigInteger n,m;
            n = sc.nextBigInteger();
            m = sc.nextBigInteger();
            int compare = n.compareTo(m);
            if(compare == 0){
                System.out.println("=");
            }
            if(compare == 1){
                System.out.println(">");
            }
            if(compare == -1){
                System.out.println("<");
            }

        }
    }
}
