class Solution {
private:
    inline int dialDist(char a, char b) {
        int diff = std::abs(a - b);
        return std::min(diff, 10 - diff);
    }

public:
    int minRotations(int n, std::string s) {
        int noOpCost = 0;
        char cur = '0';
        for (char ch : s) {
            noOpCost += dialDist(cur, ch);
            cur = ch;
        }

        std::vector<int> suffixCost(n, 0);
        for (int i = n - 2; i >= 0; --i) {
            suffixCost[i] = suffixCost[i + 1] + dialDist(s[i], s[i + 1]);
        }

        int minTotal = noOpCost;
        int prefixCost = 0;

        for (int k = 0; k < n; ++k) {
            char prevChar = (k == 0) ? '0' : s[k - 1];
            int transitionToReversed = dialDist(prevChar, s[n - 1]);
            int internalSuffixCost = suffixCost[k];

            int totalWithReverse = prefixCost + transitionToReversed + internalSuffixCost;
            minTotal = std::min(minTotal, totalWithReverse);

            prefixCost += dialDist(prevChar, s[k]);
        }

        return minTotal;
    }
};