package Java.testcase;

import java.util.*;

public class String_testCase
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            String_testCase obj = new String_testCase();
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            int i1 = sc.nextInt();
            int N = sc.nextInt();
            String op = obj.solve(s1, s2, i1, N);
            System.out.println(op);
        }
    }
    public String solve(String s1, String s2, int i1, int N)
    {
        String p = "";
        if(s1.length() <= s2.length())
        {
            p += s1.charAt(0);
        }
        else
        {
            p += s2.charAt(0);
        }

        if(s1.length() >= s2.length())
        {
            p += s1;
        }
        else
        {
            p += s2;
        }

        String i_s = Integer.toString(i1);

        p += (i_s.charAt(N-1) + i_s.charAt(i_s.length()-N));

        String o = "";
        for(int i = 0; i < p.length(); i++)
        {
            if(Character.isUpperCase(p.charAt(i)))
            {
                o += Character.toLowerCase(p.charAt(i));
            }
            else
            {
                o += Character.toUpperCase(p.charAt(i));
            }    
        }
        return o;
    }
    
}
