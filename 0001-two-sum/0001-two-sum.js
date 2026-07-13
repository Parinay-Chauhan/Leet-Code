/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {

        var n = nums.length;

        for(var i = 0; i < n; i++) {

            for(var j = i + 1; j < n; j++) {

                if(nums[i] + nums[j] == target) {
                    return [i, j];
                }

            }
        }

        return {};
};