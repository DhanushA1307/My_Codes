package My_Codes.Java.invalid_phone_number;

import java.util.*;

public class invalidphonenumber
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            String s;
            ArrayList<String> vec = new ArrayList<>();
            while(true)
            {
                s = sc.nextLine();
                if(s.equals("q"))
                    break;
                vec.add(s);
            }
            int valid = 0;
            for(String i : vec)
            {
                if(i.matches("[0-9]{10}"))
                {
                    //System.out.println(i);
                        valid++;
                }
            }
            System.out.println(vec.size()-valid);
        }
    }
}