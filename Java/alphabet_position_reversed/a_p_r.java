package Java.alphabet_position_reversed;
import java.util.*;

public class a_p_r
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int N = sc.nextInt(), i = 0; 
            int[] arr = new int[N];
            
            while(i <= N)
            {
                if(i == N)
                {
                    i--;
                    break;
                }
                char c = sc.next().charAt(0);
                arr[i] = (int)Character.toLowerCase(c) - 96;
                i++;
            }

            while(i >= 0)
            {
                System.out.println(arr[i]);
                i--;
            }
        }
    }
}