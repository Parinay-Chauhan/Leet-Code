class Solution {
    public long countCommas(long n) {

     long cur = 1000;
     long res = 0;

     while( cur <= n){
        res += n - cur + 1;
        cur *= 1000;
     }   
     return res;

    }
}
