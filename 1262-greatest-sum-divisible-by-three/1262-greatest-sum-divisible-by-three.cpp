class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {

        vector<int> dp = {0, INT_MIN, INT_MIN};

        for (int num : nums) {
            vector<int> temp = dp;

            for (int i = 0; i < 3; i++) {

                if (temp[i] == INT_MIN) continue;   // IMPORTANT

                int sum = temp[i] + num;
                dp[sum % 3] = max(dp[sum % 3], sum);
            }
        }

        return dp[0];
    }
};