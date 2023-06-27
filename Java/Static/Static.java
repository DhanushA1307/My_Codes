package Java.Static;
import java.util.*;

class staticDemo
{
    private static int a = 0;
    public int b = 0;

    public void set(int i, int j)
    {
        a = i;
        b = j;
    }

    public void show()
    {
        System.out.println(a+" "+b);
    }
}


public class Static
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            //int i = sc.nextInt(), j = sc.nextInt();
            staticDemo obj1 = new staticDemo();
            staticDemo obj2 = new staticDemo(); 
            obj1.set(1,1);
            obj1.show();
            obj2.set(2,2);
            obj2.show();
            obj1.show();
        }
    }
}
