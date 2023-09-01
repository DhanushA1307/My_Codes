package Java.minimum_sum_of_left_and_right;
import java.util.*;

public class m_s_o_l_a_r
{
    public static void main(String[] args) 
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int N, s1 = 0, s2 = 0;
            ArrayList<Integer> a = new ArrayList<>();
            while(sc.hasNextInt())
            {
                N = sc.nextInt();
                a.add(N);
            }
            N = sc.nextInt();
            for(int i = 0; i < a.size(); i++)
            {
                if(a.get(i) == N)
                {
                    break;
                }
                s1 += a.get(i);
            }
            for(int i = a.size()-1; i >= 0; i--)
            {
                if(a.get(i) == N)
                {
                    break;
                }
                s2 += a.get(i);
            }
            System.out.println(Math.min(s1, s2));
        }    
    }
}