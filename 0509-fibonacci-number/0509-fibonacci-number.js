/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
      if(n<=1){
            return n;
        } 
        var last = fib(n-1);
        var Secondlast= fib(n-2);
        return last + Secondlast;
}
