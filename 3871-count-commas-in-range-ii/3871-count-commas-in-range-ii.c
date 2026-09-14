long long countCommas(long long n) {
    long long cur = 1000;
    long long res = 0;

    while (cur <= n) {
        res += n - cur + 1;
        // Check for potential overflow before multiplying by 1000
        if (cur > LLONG_MAX / 1000) {
            break;
        }
        cur *= 1000;
    }   
    return res;
}