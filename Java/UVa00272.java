import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        boolean status = false;
        String str;
        Scanner in = new Scanner (System.in);
        //Tried bufferedInput but it failed so using Scanner
        //readLine() of bufferedInput gives error
        while(in.hasNextLine()){
            str = in.nextLine();
            for(int i = 0; i < str.length(); i++) {
                if (str.charAt(i) == '"') {
                    str = status ? str.replaceFirst("\"", "\'\'") : str.replaceFirst("\"", "``");
                    status = !status;
                }
            }
            System.out.println(str);
        }
    }
}
