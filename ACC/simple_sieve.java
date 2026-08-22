import java.util.*;

public class simple_sieve {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = sc.nextInt();

        boolean[] prime = new boolean[n + 1];

        Arrays.fill(prime, true);

        if (n >= 0)
            prime[0] = false;
        if (n >= 1)
            prime[0] = false;

        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (prime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }

        System.out.print("Primes under " + n + " : ");
        for (int i = 2; i <= n; i++) {
            if (prime[i])
                System.out.print(i + " ");
        }
        System.out.println("\n");
        sc.close();
    }
}