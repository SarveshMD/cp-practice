import java.util.*;

public class chinese_remainder_theorem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int[] mArr = new int[n];
        int[] aArr = new int[n];

        System.out.print("Enter a array: ");
        for (int i = 0; i < n; i++) {
            aArr[i] = sc.nextInt();
        }
        System.out.print("Enter m array: ");
        for (int i = 0; i < n; i++) {
            mArr[i] = sc.nextInt();
        }

        int sum = 0;
        int M = 1;

        for (int i = 0; i < n; i++) {
            M *= mArr[i];
        }

        for (int i = 0; i < n; i++) {
            // find M-1
            int Mi = M / mArr[i];
            int MiModmi = Mi % mArr[i];
            int Minv = 0;
            for (int j = 1; j < mArr[i]; j++) {
                if ((MiModmi * j) % mArr[i] == 1) {
                    Minv = j;
                    break;
                }
            }
            sum += aArr[i] * Mi * Minv;
        }

        System.out.println("Result: " + sum % M);

        sc.close();
    }
}