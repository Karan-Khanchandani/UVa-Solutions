import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        while(t != 0){

           int divx,divy;
           divx = sc.nextInt();
           divy = sc.nextInt();
           while(t-- != 0){
               int m,n;
               m = sc.nextInt();
               n = sc.nextInt();

               if(m == divx || n == divy){
                   System.out.println("divisa");
               }else if(m > divx && n > divy){
                   System.out.println("NE");
               }else if(m < divx && n > divy){
                   System.out.println("NO");
               }else if(m > divx && n < divy){
                   System.out.println("SE");
               }else{
                   System.out.println("SO");
               }
           }
           t = sc.nextInt();
           }
        }
    }

