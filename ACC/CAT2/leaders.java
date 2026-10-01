import java.util.*;

public class leaders {
    public static void main(String[] args) {
        int[] arr = { 16, 17, 4, 3, 5, 2 };
        int n = arr.length;

        int maxSoFar = Integer.MIN_VALUE;
        List<Integer> res = new ArrayList<>();

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > maxSoFar) {
                maxSoFar = arr[i];
                res.add(maxSoFar);
            }
        }

        for (int item : res)
            System.out.print(item + " ");
    }

}
