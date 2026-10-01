import java.util.Scanner;

public class block_swap {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int d = sc.nextInt();

        d = d % n;

        for (int i = 0; i < n; i++) {
            System.out.printf("%d, ", arr[(d + i) % n]);
        }

        sc.close();
    }
}
