const getGcd = (a, b) => {
    let big = a > b ? a : b;
    let small = a < b ? a : b;
    let n;
    
    while ((big % small) > 0) {
        n = big % small;
        big = small;
        small = n;
    }
    
    return small;
}

function solution(numer1, denom1, numer2, denom2) {
    const newNumer = (numer1 * denom2) + (numer2 * denom1);
    const newDenom = denom1 * denom2;
    const gcd = getGcd(newNumer, newDenom);
    
    return [newNumer / gcd, newDenom / gcd];
}