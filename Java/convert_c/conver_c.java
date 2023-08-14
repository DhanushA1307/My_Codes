import java.util.*;

//Package Java.convert_c

public class conver_c
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int from = sc.nextInt();
        int to = sc.nextInt();

        Set<Integer> allfactors = new TreeSet<>();
        for(int val = from; val <= to; val++){
            for(int ctr = 1; ctr*ctr <= val; ctr++){
                if(val % ctr == 0){
                    allfactors.add(ctr);
                    allfactors.add(val/ctr);
                }
            }
        }

        for(Integer factor : allfactors) System.out.print(factor + " ");
    }
}