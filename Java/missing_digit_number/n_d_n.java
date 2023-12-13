package My_Codes.Java.missing_digit_number;
import java.util.*;
public class n_d_n{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < Character.getNumericValue(s.charAt(i)); j++){
                System.out.print(s.substring(0, i)+s.substring(i+1,s.length())+" ");
            }
            System.out.println(" ");
        }
        sc.close();
    }
}