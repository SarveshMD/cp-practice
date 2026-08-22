import java.util.*;

public class alice_apple_tree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter (M, K, N ,E, S, W): ");
        int M = sc.nextInt();
        int K = sc.nextInt();
        int N = sc.nextInt();
        int E = sc.nextInt();
        int S = sc.nextInt();
        int W = sc.nextInt();

        int res = 0;
        if (M <= S * K) {
            res = M;
        } else if (M - (S * K) <= (E + W)) {
            res = S * K + (M - S * K) * K;
        } else {
            res = -1;
        }

        System.out.println("Result: " + res);
        sc.close();
    }
}
