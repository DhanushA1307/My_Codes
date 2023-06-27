package Java.max_num;
import java.util.*;

public class max_num
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int N = sc.nextInt(), K = sc.nextInt(), val;
            ArrayList<Integer> vec = new ArrayList<>();
            ArrayList<Integer> sol = new ArrayList<>();
            for(int i = 1; i <= N; i++)
            {
                val = sc.nextInt();
                vec.add(val);
            }
            val = Collections.max(vec);
            for(int i : vec)
            {
                if(i != val)
                {
                    sol.add(i*K);
                }
            }
            max_num f = new max_num();
            if(f.solve(sol, val)) System.out.println(val);
            else System.out.println(-1);
        }
    }
    public boolean solve(ArrayList<Integer> vec,int val)
    {
        int c = 0;
        for(int i : vec)
        {
            if(i <= val)
            {
                c++;
            }
            else
            {
                return false;
            }
        }
        if(c == vec.size())
        {
            return true;
        }
        return false;
    }
}