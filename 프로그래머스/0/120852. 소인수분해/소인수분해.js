function solution(n) {
    const factorSet = new Set();
    let m = n;
    let d = 2;
    
    while (m > 1) {
        if (m % d === 0) {
            m /= d;
            factorSet.add(d);
        } else {
            d++;
        }
    }
    
    return [...factorSet].sort((a, b) => a - b);
}