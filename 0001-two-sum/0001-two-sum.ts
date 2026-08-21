function twoSum(nums: number[], target: number): number[] {
        const n = nums.length;

        for (let i = 0; i < n; i++) {
            for (let j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] === target) {
                    return [i, j];
                }
            }
        }

       return [];
}
