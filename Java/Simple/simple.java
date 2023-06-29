package Java.Simple;
import java.util.*;

class simple
{
    public static void main(String[] args)
    {
       try(Scanner sc = new Scanner(System.in))
       {
            /*int a = 10, b = 5;
        System.out.println((++a)+(++b));*/
            /*try(Scanner sc = new Scanner(System.in);){
        //System.out.println("Welcome "+args[0]);
        int i1 = Integer.parseInt(args[0]);
        int i2 = Integer.parseInt(args[1]);
        System.out.println(i1+i2);
        //int len = args.length; System.out.println(len);
        //System.out.println(args[0]+" Technologies "+args[1]);
        }*/
            /*String s = "Delhi";
            if(s == "Meerut") 
            {
                System.out.println("city is Meerut");
            }
            else if(s == "Agra")
            {
                System.out.println("city is Agra");
            }
            else if(s == "Surat")
            {
                System.out.println("city is Surat");
            }
            else 
            {
                System.out.println(s);
            }*/
            //int l = 0, i= 0, j = 0, k = 0;
            /*int []a = new int[30];
            int []b = new int[5];
            for(; i < 10; i++)//i+=2
            {
                a[i] = (i+1);
                l += (i+1);
            }
            while(i < 20)
            {
                a[i] = (i+1);
                //l += (i+1);
                i++;
            }
            do
            {
                a[i] = (i+1);
                i++;
            }while(i < 30);
            while(j < 5)
            {
                b[j] = k;
                j++;
                k+=2;
            }
            System.out.println(l);
            for(Integer o : b) System.out.println(o+" ");*/
            for(int i = 0; i <= 2; i++)
            {
                for(int j = i; j <= 5; j++)
                {
                    if(j == 4) continue;
                    System.out.print(j+" ");
                }
                System.out.println();
            }
       }
    }
} 