function search(nums: number[], target: number): number {
        let start = 0;
        let end = nums.length - 1;
        let mid = start + Math.floor((end - start) / 2);

        while (start <= end) {
            if (nums[mid] === target) {
                return mid;
            }

            if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }

            mid = start + Math.floor((end - start) / 2);
        }
        return -1;
}
