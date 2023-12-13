package My_Codes.Java.squares_and_cubes;

import java.util.*;
//import java.io.*;

public class sac
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            Long a = sc.nextLong(), b = sc.nextLong(), c = sc.nextLong();
            if(a == b && a == c && b == c) System.out.print(Math.pow(a,3));
            else if(a == b) System.out.print(Math.pow(c,2));
            else if(a == c) System.out.print(Math.pow(b,2));
            else if(b == c) System.out.print(Math.pow(a,2));
        }
    }
}