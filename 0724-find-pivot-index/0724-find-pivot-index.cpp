class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
             totalSum += nums[i];
        }

        int leftSum = 0;
        int rightSum = 0;
        int ans = 0;
        for(int j = 0; j < nums.size(); j++){
               rightSum = totalSum - leftSum - nums[j];

               if(leftSum == rightSum){
                   return j;
               } else{
                   leftSum += nums[j];
               }
        }
        return -1;
    }
};