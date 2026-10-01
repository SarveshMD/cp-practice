public class max_equil {
    public static void main(String[] args) {
        int[] arr = { -1, 2, 3, 0, 3, 2, -1 };

        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        int maxSum = Integer.MIN_VALUE;
        int leftSum = 0;

        for (int i = 0; i < arr.length; i++) {
            leftSum += arr[i];
            int rightSum = sum - leftSum + arr[i];
            if (leftSum == rightSum) {
                maxSum = Math.max(maxSum, leftSum);
            }
        }
        System.out.println("maxSum: " + maxSum);
    }
}
