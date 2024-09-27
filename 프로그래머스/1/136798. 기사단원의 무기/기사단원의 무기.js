const getFactorCnt = (n) => {
    if (n === 1) {
        return 1;
    } else {
        let factorSet = new Set();
        let d = Math.ceil(Math.sqrt(n));

        while (d > 0) {
            if (n % d === 0) {
                factorSet.add(d);
                factorSet.add(n / d);
            }
            d--;
        }
        
        return factorSet.size;
    }
}

function solution(number, limit, power) {
    let weight = 0;
    
    for (let i = 1; i <= number; i++) {
        const factorCnt = getFactorCnt(i);
        
        if (factorCnt > limit) {
            weight += power;
        } else {
            weight += factorCnt;
        }
    }
    
    return weight;
}