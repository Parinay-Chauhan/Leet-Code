public class Solution {
    public void MoveZeroes(int[] nums) {
        int nonZero = 0;
        
        for(int i = 0; i < nums.Length; i++) {
            if(nums[i] != 0) {
                Swap(ref nums[i], ref nums[nonZero++]);
                // nonZero++;
            }
        }
    }

    private void Swap(ref int a, ref int b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
