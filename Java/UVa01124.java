import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        String str;
        Scanner in = new Scanner (System.in);
        //Tried bufferedInput but it failed so using Scanner
        //readLine() of bufferedInput gives error
        while(in.hasNextLine()){
            str = in.nextLine();
            System.out.println(str);
        }
    }
}
