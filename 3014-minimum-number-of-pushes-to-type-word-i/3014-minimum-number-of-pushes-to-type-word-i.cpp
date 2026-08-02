class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int res = 0;
        for(int i = 0; i < n; i++){
            res = res + ( i / 8 + 1);
        }
        return res;
    }
};