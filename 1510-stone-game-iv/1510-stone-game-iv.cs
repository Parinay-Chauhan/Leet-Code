using System;

public class Solution {
    private bool[] dp = new bool[100001];

    public bool WinnerSquareGame(int n) {
        if (n == 0)
            return false;

        if (dp[n])
            return dp[n];

        for (int i = 1; i * i <= n; i++) {
            if (WinnerSquareGame(n - i * i) == false) {
                return dp[n] = true;
            } 
        }   
        return dp[n] = false;
    }
}