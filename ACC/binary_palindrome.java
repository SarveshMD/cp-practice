import java.util.*;

public class binary_palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String binString = Integer.toBinaryString(n);
        String oppString = new StringBuilder(binString).reverse().toString();

        boolean res = binString.equals(oppString);
        System.out.println("Output: " + res);

        sc.close();
    }
}
