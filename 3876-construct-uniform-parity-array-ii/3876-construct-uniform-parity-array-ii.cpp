class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_val = INT_MAX;
        bool has_odd = false;

        for (int i : nums1) {
            min_val = min(min_val, i);
            if (i % 2 != 0) {
                has_odd = true;
            }
        }

        
        if (min_val % 2 != 0) {
            return true;
        }
        
        return !has_odd;
    }
};