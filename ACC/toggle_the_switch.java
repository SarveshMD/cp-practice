import java.util.*;

public class toggle_the_switch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of switches (n): ");
        int n = sc.nextInt();

        int[] switches = new int[n];

        Arrays.fill(switches, 0);

        System.out.print("Enter number of operations (q): ");
        int q = sc.nextInt();

        System.out.print("Enter operations indices: ");
        int[] indices = new int[q];
        for (int i = 0; i < q; i++) {
            indices[i] = sc.nextInt();
        }

        for (int i = 0; i < q; i++) {
            for (int j = 1; j * indices[i] <= n; j++) {
                if (switches[j * indices[i] - 1] == 1) {
                    switches[j * indices[i] - 1] = 0;
                } else {
                    switches[j * indices[i] - 1] = 1;
                }
            }
        }

        System.out.print("Output: ");
        for (int i = 0; i < n; i++) {
            System.out.print(switches[i] + " ");
        }
        System.out.println();

        sc.close();
    }
}
