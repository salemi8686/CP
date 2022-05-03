/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    m = prices.length;
    maxs = 0;
    for (i = 0; i < m - 1; ++i) {
        for (j = i + 1; j < m; ++j) {
            if (prices[i] > prices[j]) continue;
            dal = 0;
            const cur = prices[j] - prices[i];
            if (j + 2 < m - 1) dal = maxSum(prices.slice(j + 2));
            maxs = Math.max(maxs, dal + cur);
            console.log(dal + cur);
        }
    }
    return maxs;

    function maxSum(pslice) {
        n = pslice.length;
        max = 0;
        for (k = 0; k < n - 1; ++k) {
            //sum = 0;
            for (x = k + 1; x < n; ++x) {
                sum = 0;
                //console.log(pslice[k], pslice[x], sum);
                if (pslice[k] > pslice[x]) continue;
                sum += (pslice[x] - pslice[k]);
                console.log(pslice[k], pslice[x], sum);
                if (x + 2 < pslice.length - 1) {
                    prs = pslice.slice(x + 2);
                    sum += maxSum(prs);
                }
                max = Math.max(max, sum);
            }
            //max = Math.max(max, sum);
        }
        return max;
    }
};

prices = [2, 6, 8, 7, 8, 7, 9, 4, 1, 2, 4, 5, 8];
console.log(maxProfit(prices));