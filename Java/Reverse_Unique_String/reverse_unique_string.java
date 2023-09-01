package Java.Reverse_Unique_String;

import java.util.*;

public class reverse_unique_string
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            String s = sc.nextLine();
            Map<Character, Integer> mp = new HashMap<Character, Integer>();
            for(char c : s.toCharArray())
            {
                if(mp.containsKey(c))
                    mp.put(c, mp.get(c) + 1);
                else
                    mp.put(c, 1);
            }
            List<Map.Entry<Character, Integer>> pr = new ArrayList<Map.Entry<Character, Integer>>();
            for(Map.Entry<Character, Integer> e : mp.entrySet()) pr.add(e);
            Collections.sort(pr, new Comparator<Map.Entry<Character, Integer>>()
            {
                public int compare(Map.Entry<Character, Integer> e1, Map.Entry<Character, Integer> e2)
                {
                    return e2.getKey() - e1.getKey();
                }
            });
            for(Map.Entry<Character, Integer> e : pr)
            {
                System.out.print(e.getKey());
            }
        }
    }
}


