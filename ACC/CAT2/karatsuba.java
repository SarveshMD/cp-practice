import java.util.*;

public class karatsuba {
    public static long multiply(long x, long y) {
        if (x < 10 || y < 10)
            return x * y;

        int n = Math.max(Long.toString(x).length(), Long.toString(y).length());
        int m = n / 2;
        long p = (long) Math.pow(10, m);

        long a = x / p;
        long b = x % p;
        long c = y / p;
        long d = y % p;

        long z2 = multiply(a, c);
        long z0 = multiply(b, d);
        long z1 = multiply((a + b), (c + d)) - z0 - z2;

        long res = z2 * p * p + z1 * p + z0;

        return res;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long a = sc.nextLong();
        long b = sc.nextLong();
        System.out.printf("Multiplication of %d and %d: %d\n", a, b, multiply(a, b));

        sc.close();
    }
}
