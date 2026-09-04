class Solution {

    bool dp[100001] = {false};
    
public: 
    bool winnerSquareGame(int n) {
        if (n == 0)
            return false;

        if (dp[n])
            return dp[n];

        for (int i = 1; i * i <= n; i++) {
            if (winnerSquareGame(n - i * i) == false) {
                return dp[n] = true;
            } 
        }   
        return dp[n] = false;
    }
};
