function solution(numlist, n) {
    return numlist
        .map((el) => [el, Math.abs(n - el)])
        .sort((a, b) => {
            if (a[1] === b[1]) {
                return b[0] - a[0];
            } else {
                return a[1] - b[1];
            }
        })
        .map((el) => el[0]);
}