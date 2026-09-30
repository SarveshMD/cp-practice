import java.util.Scanner;
import java.util.Arrays;

public class sspractice {
    public static void main(String[] argv) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        boolean[] primes = new boolean[n + 1];

        Arrays.fill(primes, true);

        if (n >= 0)
            primes[0] = false;
        if (n >= 1)
            primes[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primes[j] = false;
                }
            }
        }

        System.out.print("Result: ");
        for (int i = 2; i <= n; i++) {
            if (primes[i])
                System.out.print(i + ", ");
        }
        System.out.println();
        sc.close();
    }
}
