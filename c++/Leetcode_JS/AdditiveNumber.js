/**
 * @param {string} num
 * @return {boolean}
 */

var isAdditiveNumber = function(num) {
    n = Math.floor(num.length / 2);
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            const s1 = num.slice(0, i);
            const s2 = num.slice(i, i + j);
            if (isAdditive(s1, s2, num.slice(i + j))) return true;
        }
    }
    return false;

    function isAdditive(s1, s2, s) {
        if ((s1.startsWith('0') && s1.length > 1) || (s2.startsWith('0') && s2.length > 1)) return false;
        s3 = (Number(s1) + Number(s2)).toString();
        if (s3 === s) return true;
        if (s.startsWith(s3)) {
            return isAdditive(s2, s3, s.slice(s3.length));
        }
        return false;
    }
};

s = "199100199";
console.log(isAdditiveNumber(s));