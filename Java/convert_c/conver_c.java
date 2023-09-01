package Java.convert_c;

//package My_Codes.Java.convert_c;

import java.util.*;


public class conver_c
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in)){
        int from = sc.nextInt();
        int to = sc.nextInt();

        Set<Integer> allfactors = new TreeSet<>();
        for(int val = from; val <= to; val++){
            for(int ctr = 1; ctr*ctr <= val; ctr++){
                if(val % ctr == 0){
                    allfactors.add(ctr);
                    allfactors.add(val/ctr);
                }
            }
        }

        for(Integer factor : allfactors) System.out.print(factor + " ");}
    }
}