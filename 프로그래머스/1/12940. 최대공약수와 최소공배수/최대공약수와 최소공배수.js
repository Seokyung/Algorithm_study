const gcd = (n, m) => {
    let d = n;
    
    while (d > 0) {
        if ((n % d === 0) && (m % d === 0)) {
            return d;
        }
        d--;
    }
}

const lcm = (n, m) => {
    let d = 1;
    
    while (d <= n) {
        if ((m * d) % n === 0) {
            return m * d;
        }
        d++;
    }
}

function solution(n, m) {
    let big = 0;
    let small = 0;
    
    if (n > m) {
        big = n;
        small = m;
    } else {
        big = m;
        small = n;
    }
    
    return [gcd(small, big), lcm(small, big)];
}