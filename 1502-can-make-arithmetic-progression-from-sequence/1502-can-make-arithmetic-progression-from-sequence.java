import java.util.Arrays;

class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        // Sort the array in ascending order
        Arrays.sort(arr);

        // Find the difference between the first two elements
        int diff = arr[1] - arr[0];

        // Check if the difference is consistent across all consecutive pairs
        for (int i = 2; i < arr.length; i++) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }

        return true;
    }
}