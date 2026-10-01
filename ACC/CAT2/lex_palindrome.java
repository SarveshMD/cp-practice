
public class lex_palindrome {
    public static void main(String[] args) {
        int[] freq = new int[26];
        String inpString = "malayalam";

        for (char c : inpString.toCharArray()) {
            freq[c - 'a']++;
        }

        int oddCount = 0;
        char oddChar = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                oddCount++;
                oddChar = (char) ('a' + i);
            }
        }

        if (oddCount > 1) {
            System.out.println("Palindrome not possible");
            return;
        }

        StringBuilder left = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            int half = freq[i] / 2;
            for (int j = 0; j < half; j++) {
                left.append((char) ('a' + i));
            }
        }

        String mid = "";
        if (oddCount == 1) {
            mid = String.valueOf(oddChar);
        }

        String right = new StringBuilder(left).reverse().toString();

        String res = left + mid + right;

        System.out.println(res);
    }
}
