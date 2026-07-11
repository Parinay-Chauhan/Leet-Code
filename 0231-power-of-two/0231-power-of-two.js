/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    
         var ans = 1;

         for(var i =0; i <= 30; i++){
            if( ans == n){
                return true;
            }

            if(ans < Number.MAX_SAFE_INTEGER / 2){
             ans = ans * 2;
            }
        }
            return false;
}