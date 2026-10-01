import java.util.*;

public class booth {
    public static int boothMultiply(int m, int q) {
        int qPrev = 0;
        int n = 32;
        int acc = 0;

        for (int i = 0; i < n; i++) {
            int q0 = q & 1;

            if (q0 == 0 && qPrev == 1) {
                acc = acc + m;
            } else if (q0 == 1 && qPrev == 0) {
                acc = acc - m;
            }

            qPrev = q0;
            q = (q >>> 1) | ((acc & 1) << 31);
            acc = (acc >> 1);
        }
        return q;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int q = sc.nextInt();
        System.out.printf("boothMultiply result of %d and %d: %d\n", m, q, boothMultiply(m, q));

        sc.close();
    }
}
