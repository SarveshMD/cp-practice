public class longest_seq {
    public static void main(String[] args) {
        int[] arr = { 1, 1, 0, 1, 1, 0, 1, 1, 1 };

        int left = 0, zeros = 0;
        int maxLength = 0;

        for (int right = 0; right < arr.length; right++) {
            if (arr[right] == 0) {
                zeros++;
            }

            while (zeros > 1) {
                if (arr[left] == 0)
                    zeros--;
                left++;
            }

            maxLength = Integer.max(maxLength, right - left + 1);

        }
        System.out.println("Max: " + maxLength);
    }

}
