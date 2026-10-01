import java.util.*;

public class majority {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 4, 4, 5, 9, 9, 9, 9, 10, 10, 9, 4, 4, 4, 4, 4, 4, 4, 4, 4 };

        Arrays.sort(arr);

        int n = arr.length;
        System.out.println(arr[n / 2]);
    }
}
