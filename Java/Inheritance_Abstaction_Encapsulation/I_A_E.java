package Java.Inheritance_Abstaction_Encapsulation;
import java.util.*;

class Points
{
    private int x;
    private int y;
    Points(int x, int y)
    {
        this.x = (x < 90 ? x : (x >= 91 ? 91 : x));
        this.y = (y < 90 ? y : (y >= 91 ? 91 : y));
    }
    public int getX()
    {
        return x;
    }
    public int getY()
    {
        return y;
    }
}

public class I_A_E
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int x = sc.nextInt(), y = sc.nextInt();
            Points p = new Points(x,y);
            System.out.println(p.getX() + " " + p.getY());
        }
    }    
}
