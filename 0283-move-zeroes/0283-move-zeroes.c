void moveZeroes(int* nums, int numsSize) {
    int nonZero = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[nonZero];
            nums[nonZero++] = temp;
            // nonZero++;
        }
    }
}