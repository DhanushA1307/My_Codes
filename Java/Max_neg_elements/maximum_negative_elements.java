package My_Codes.Java.Max_neg_elements;
import java.util.*;

public class maximum_negative_elements
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int R = sc.nextInt(), C = sc.nextInt();
            int[][] arr = new int[R][C];
            for(int i=0;i<R;i++)
            {
                for(int j=0;j<C;j++)
                {
                    arr[i][j] = sc.nextInt();
                }
            }
            Vector<Map.Entry<Integer, Integer>> rows = new Vector<Map.Entry<Integer, Integer>>();
            for(int i = 0; i < C; i++)
            {
                int c = 0;
                for(int j = 0; j < R; j++)
                {
                    if(arr[j][i] < 0)
                    {
                        c++;
                    }
                }
                if(c != 0)
                {
                    rows.add(new AbstractMap.SimpleEntry<Integer, Integer>(c, i+1));
                }
            }
            Collections.sort(rows, new Comparator<Map.Entry<Integer, Integer>>(){
                public int compare(Map.Entry<Integer, Integer> p1, Map.Entry<Integer, Integer> p2)
                {
                    return p2.getValue().compareTo(p1.getValue());
                }
            });
            if(!rows.isEmpty())
            {
                System.out.println(rows.get(0).getValue());
            }
            else
            {
                System.out.println(-1);
            }
        }
    }
}