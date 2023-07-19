package Java.max_no_1s_rows;

import java.util.*;

public class MaxNumberOfOnesInRows {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int N = sc.nextInt();
            List<Pair<Integer, Integer>> mp = new ArrayList<>();
            for (int i = 1; i <= N; i++) {
                String s = sc.next();
                int c = countOnes(s);
                mp.add(new Pair<>(i, c));
            }
            mp.sort((a, b) -> b.getSecond() - a.getSecond());
            System.out.println(mp.get(0).getFirst());
        }
    }

    private static int countOnes(String s) {
        int count = 0;
        for (char ch : s.toCharArray()) {
            if (ch == '1') {
                count++;
            }
        }
        return count;
    }
}
    
class Pair<T, U> {
    private T first;
    private U second;
    
    public Pair(T first, U second) {
        this.first = first;
        this.second = second;
    }

    public T getFirst() {
        return this.first;
    }

    public U getSecond() {
        return this.second;
    }
}