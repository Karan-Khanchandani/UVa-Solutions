import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int start,first,second,third;
        start = sc.nextInt();
        first = sc.nextInt();
        second = sc.nextInt();
        third = sc.nextInt();
        while(start != 0 || first!=0 || second!=0 || third!=0){
            int ans = 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9;
            // % operator is confusing in Java
            // ideally -5%40 should return 35 but in Java it returns -5
            // the sign is preserved hence we are adding 40 to each term
            System.out.println(ans);
            start = sc.nextInt();
            first = sc.nextInt();
            second = sc.nextInt();
            third = sc.nextInt();
        }
    }
}
