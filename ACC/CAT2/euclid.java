import java.util.*;

public class euclid {
    public static int gcd(int a, int b) {
        return (b == 0) ? Math.abs(a) : gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));

        sc.close();
    }
}
