/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2; // We expect to return two indices
    int* result = (int*)malloc(2 * sizeof(int)); // Allocate memory for the result

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // Return the indices
            }
        }
    }

    *returnSize = 0; // If no solution found, set return size to 0
    return NULL; // Return NULL if no solution
}

