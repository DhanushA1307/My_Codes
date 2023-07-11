package Java.testcase;

import java.util.*;

public class _testcase
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            _testcase obj = new _testcase();
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            System.out.println(obj.Test_case(a,b,c));
        }
    }
    public int Test_case(int a, int b, int c)
    {
        long a1 = a;
        long b1 = b;
        long c1 = c;
        long val = 0; 

        if(prime(b1) && b1 % 2 == 0)
        {
            val = a1*a1*(prime_series(b));
        }
        else if(prime(b1) && b1 % 2 == 1)
        {
            val = b1*b1*(prime_series(c));
        }
        else if(!prime(b1) && b1 % 2 == 0)
        {
            val = c1*c1*(prime_series(b1+c1));
        }
        else if(!prime(b1) && b1 % 2 == 1)
        {
            val = prime_series(a1+b1+c1);
        }

        if(prime(val))
        {
            val += c;
        }
        else
        {
            val -= c;
        }
        return (int)val;
    }

    public boolean prime(long p)
    {
        if(p <= 1) 
        {
            return false;
        }
        if(p <= 3)
        {
            return true;
        }
        if(p % 2 == 0 || p % 3 == 0)
        {
            return false;
        }
        for(int i = 5; i * i <= p; i += 6) 
        {
            if(p % i == 0 || p % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }

    public int  prime_series(long count)
    {
        int series = 0;
        for(int i = 1, p_i = 2; i <= count; p_i++)
        {
            if(prime(p_i))
            {
                series += p_i;
                i++;
            }
        }
        return series;
    }
}