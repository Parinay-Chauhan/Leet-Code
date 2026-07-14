/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {

    const INT_MAX = 2147483647;
    const INT_MIN = -2147483648;

        let ans = 0;

            while(x !== 0){

            let digit = x % 10;
            ans = ans * 10 + digit;

        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }

        x = Math.trunc(x / 10);
    }

    return ans;
}