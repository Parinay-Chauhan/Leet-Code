class Solution {
public:
    int smallestNumber(int n, int t) {
        for( int i = n; i <= n + t; i++){
            int pro = 1;
            int cur = i;
            while( cur > 0){
                pro = pro *  ( cur % 10);
                cur = cur / 10;
            }
            if( pro % t == 0)
            return i;
        }
        return n;        
    }
};