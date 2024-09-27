function solution(number, limit, power) {
    let weight = 0;
    
    for (let i = 1; i <= number; i++) {
        let factorCnt = 1;
        
        if (i === 1) {
            factorCnt = 1;
        } else {
            let d = Math.ceil(i / 2);
            
            while ((d > 0) && (factorCnt <= limit)) {
                if (i % d === 0) {
                    factorCnt++;
                }
                d--;
            }
        }
        
        if (factorCnt > limit) {
            weight += power;
        } else {
            weight += factorCnt;
        }
    }
    
    return weight;
}