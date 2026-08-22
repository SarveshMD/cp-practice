import java.util.*;

public class eulers_phi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        double res = (double) n;

        for (int p = 2; p <= Math.sqrt(n); p++) {
            if (n % p == 0) {
                while (n % p == 0) {
                    n /= p;
                }
                res *= (1.0 - (1.0 / p));
            }
        }

        if (n > 1) {
            res = res * (1.0 - 1.0 / n);
        }

        System.out.println(res);

        sc.close();
    }
}
