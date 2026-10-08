class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        const long long NEG = LLONG_MIN / 4;
        int n = nums.size();
        vector<long long> e0(n, NEG), o0(n, NEG), e1(n, NEG), o1(n, NEG);
        long long ans = NEG;

        for (int i = 0; i < n; i++) {
            long long x = nums[i];

            e0[i] = x;
            if (i >= 1 && o0[i-1] != NEG) e0[i] = max(e0[i], o0[i-1] + x);
            if (i >= 1 && e0[i-1] != NEG) o0[i] = e0[i-1] - x;

            if (i >= 1 && o1[i-1] != NEG) e1[i] = max(e1[i], o1[i-1] + x);
            if (i >= 2 && o0[i-2] != NEG) e1[i] = max(e1[i], o0[i-2] + x);

            if (i >= 1 && e1[i-1] != NEG) o1[i] = max(o1[i], e1[i-1] - x);
            if (i >= 2 && e0[i-2] != NEG) o1[i] = max(o1[i], e0[i-2] - x);

            ans = max({ans, e0[i], o0[i], e1[i], o1[i]});
        }
        return ans;
    }
};