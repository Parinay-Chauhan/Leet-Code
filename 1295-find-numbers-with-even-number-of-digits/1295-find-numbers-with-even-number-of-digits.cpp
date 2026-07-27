class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int ans = 0;
        for( int i = 0; i < nums.size(); i++){

        int count = 0;
        int num = nums[i];

        while( num > 0){
            count++;
            num /= 10;
        }
        if( count % 2 == 0){
            ans++;
        }
    }
    return ans;

    }
};