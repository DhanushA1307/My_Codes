package Java.replaced_by_next_vowel;
import java.util.*;

public class r_by_n_v
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            r_by_n_v o = new r_by_n_v();
            char a[] = sc.next().toCharArray();
            char b = sc.next().charAt(0);
            int l = a.length;
            List<Integer> al = new ArrayList<>();
            for(int i = 0; i < l; i++)
            {
                if(o.vowels(a[i]) && al.size() != 0)
                {
                    for(int j : al) 
                    {
                        System.out.print(j);
                    }
                    al.clear();
                }
                if(a[i] == b)
                {
                    al.add(i);
                }
            }
            for(char i : a)
            {
                System.out.print(i);
            }   
        }
    }
    public Boolean vowels(char a)
    {
        String v = "aeiou";
        if(v.contains(a+""))
            return true;
        return false;
    }
}