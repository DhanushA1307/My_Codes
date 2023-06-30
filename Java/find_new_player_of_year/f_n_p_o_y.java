package Java.find_new_player_of_year;
import java.util.*;

public class f_n_p_o_y
{

    public int cond(int[] sol)
    {
        int max = sol[0], val = 0;

        for(int i = 0; i < sol.length; i++)
        {
            if(max < sol[i])
            {
                max = sol[i];
                val = i;
            }
        }

        return val;
    }

    public int playeroftheyear(int N, int M, int[][] mat)
    {
        int val = 0;

        int[] row = new int[N];

        for(int i = 0; i < N; i++)
        {
            row[i] = 0;
        }

        for(int i = 0; i < M; i++)
        {
            int[] col = new int[N];

            for(int j = 0; j < N; j++)
            {
                col[j] = mat[j][i];
            }

            int c = cond(col);

            row[c]++;
        }

        val = cond(row);

        return val;
    }


    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            f_n_p_o_y f = new f_n_p_o_y();
            int N = sc.nextInt(), M = sc.nextInt();
            int[][] mat = new int[N][M];
            
            for(int i = 0; i < N; i++)
            {
                for(int j = 0; j < M; j++)
                {
                    mat[i][j] = sc.nextInt();
                }
            }

            int value = f.playeroftheyear(N, M, mat);

            System.out.println(value);

            sc.close();
        }
    }
}