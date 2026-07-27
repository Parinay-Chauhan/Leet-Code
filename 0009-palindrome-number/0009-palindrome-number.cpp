class Solution {
public:
    bool isPalindrome(int x) {

        long long num = 0;
        int dup = x;

        while( x > 0){
            int ld = x % 10;

            num = ( num * 10 ) + ld;
            x = x / 10;
        }

        if( dup == num ) return true;
        else return false;
    }
};