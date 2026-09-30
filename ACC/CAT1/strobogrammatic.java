import java.util.*;

public class strobogrammatic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String input = sc.next();

        int l = 0;
        int r = input.length() - 1;

        Map<Character, Character> map = Map.of(
                '1', '1',
                '8', '8',
                '0', '0',
                '9', '6',
                '6', '9');

        boolean strobo = true;
        while (l <= r) {
            char leftChar = input.charAt(l);
            char rightChar = input.charAt(r);
            if (map.containsKey(leftChar)) {
                if (map.get(leftChar) != rightChar) {
                    strobo = false;
                }
            } else {
                strobo = false;
            }
            l++;
            r--;
        }

        System.out.println("Output: " + strobo);

        sc.close();
    }
}
