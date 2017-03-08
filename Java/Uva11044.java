import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        while(t-- != 0){
            int n,m;
            n = sc.nextInt();
            m = sc.nextInt();
            double ans = Math.ceil(((double)(n-2)/3))* Math.ceil(((double)(m-2)/3));
            System.out.println((int)ans);
        }
    }
}
