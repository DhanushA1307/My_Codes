package My_Codes.Java.message_encryption;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int N = scanner.nextInt();

        List<String> str_arr = new ArrayList<>();
        List<Character> str = new ArrayList<>();

        for (int i = 0; i < s.length(); i += N) {
            str_arr.add(s.substring(i, Math.min(i + N, s.length())));
        }

        for (int i = 0; i < N; i++) {
            if (i % 2 == 1) {
                String reversed = new StringBuilder(str_arr.get(i)).reverse().toString();
                str_arr.set(i, reversed);
            }
        }

        for (int i = 0, j = 0; i < N; i++) {
            if ((j + 1) == N) {
                break;
            }
            if ((i + 1) == N) {
                j++;
                i = 0;
            }
            str.add(str_arr.get(j).charAt(i));
        }

        for (char c : str) {
            System.out.print(c + " ");
        }
        scanner.close();
    }
}