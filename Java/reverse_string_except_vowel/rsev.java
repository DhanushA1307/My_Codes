package My_Codes.Java.reverse_string_except_vowel;

import java.util.*;

public class rsev
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            String s = sc.nextLine();
            ArrayList<Character> a = new ArrayList<>();
            for(int i=0;i<s.length();i++)
            {
                char c = s.charAt(i);
                if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
                    a.add(c);
            }
            Collections.reverse(a);
            for(int i = 0, j = 0; i < s.length(); i++)
            {
                char c = s.charAt(i);
                if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
                    System.out.print(a.get(j++));
                else
                    System.out.print(c);
            }
        }
    }
}