/**
 * @param {number} n
 * @return {number}
 */
var countCommas = function(n) {
     
        let cur = 1000;
        let res = 0n;
        
        // Convert to BigInt to handle large numbers safely in JavaScript
        let bigN = BigInt(n);
        let bigCur = BigInt(cur);

        while (bigCur <= bigN) {
            res += bigN - bigCur + 1n;
            bigCur *= 1000n;
        }   
        return Number(res);
}
