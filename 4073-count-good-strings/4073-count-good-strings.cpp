class Solution {
public:
    static constexpr long long MOD = 1e9 + 7;
    pair<long long, long long> fib(long long k) {
        if (k == 0) return {0, 1};
        auto [a, b] = fib(k >> 1);             
        long long c = a * ((2 * b % MOD - a + MOD) % MOD) % MOD; 
        long long d = (a * a + b * b) % MOD;                     
        if (k & 1) return {d, (c + d) % MOD};
        return {c, d};
    }

    int countGoodStrings(long long n) {
        return (2 * fib(n).first) % MOD;
    }
};