/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {
    var count = 0;
    var n = nums.length;

    for( var i = 1; i < n; i++ ){
        if( nums[ i - 1] > nums[i]){
            count++;
        }
    }
    if( nums[ n - 1] > nums[0]){
        count++;
    }

    return count <= 1;
};