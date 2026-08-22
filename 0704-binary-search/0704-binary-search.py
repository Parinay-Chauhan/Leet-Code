class Solution:
    def search(self, nums: List[int], target: int) -> int:
        start = 0
        end = len(nums) - 1
        
        while start <= end:
            mid = start + (end - start) // 2
            
            if nums[mid] == target:
                return mid
            
            if target > nums[mid]:
                start = mid + 1
            else:
                end = mid - 1
                
        return -1


if __name__ == "__main__":
    sol = Solution()
    nums = [-1, 0, 3, 5, 9, 12]
    target = 9
    result = sol.search(nums, target)
    print(f"Target {target} found at index: {result}")