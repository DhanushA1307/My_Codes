package My_Codes.Java.even_sum_of_unit_and_tenth_digit;
import java.util.*;

public class e_s_o_u_a_t
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int n = sc.nextInt();
            int n1 = sc.nextInt();
            while(n <= n1)
            {
                int unit = n % 10;
                int tenth = (n / 10) % 10;
            
                if ((unit + tenth) % 2 == 0)
                    System.out.println(n);
                n++;
            }
        }
    }
}
