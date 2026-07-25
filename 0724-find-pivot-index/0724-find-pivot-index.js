/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
     var totalSum = 0;
        for(var i = 0; i < nums.length; i++){
             totalSum += nums[i];
        }

        var leftSum = 0;
        var rightSum = 0;
        var ans = 0;
        for(var j = 0; j < nums.length; j++){
               rightSum = totalSum - leftSum - nums[j];

               if(leftSum == rightSum){
                   return j;
               } else{
                   leftSum += nums[j];
               }
        }
        return -1;
};