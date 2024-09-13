const getFactorCnt = (num) => {
    let cnt = 2;
    let n = num;
    let m = Math.ceil(num / 2) + 1;
    let d = 2;
    
    if (num === 1) {
        return 1;
    } else {
        while (d < m) {
            if (n % d === 0) {
                cnt++;
            }
            d++;
        }
    }
    
    return cnt;
}

function solution(left, right) {
    let answer = 0;
    
    for (let i = left; i <= right; i++) {
        const factorCnt = getFactorCnt(i);
        answer = factorCnt % 2 === 0 ? answer + i : answer - i;
    }
    
    return answer;
}