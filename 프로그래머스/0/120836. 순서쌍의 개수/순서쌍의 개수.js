function solution(n) {
    let d = 1;
    const numSet = new Set();
    
    while (d <= n) {
        if (n % d === 0) {
            numSet.add(d);
        }
        d++;
    }
    
    return numSet.size;
}