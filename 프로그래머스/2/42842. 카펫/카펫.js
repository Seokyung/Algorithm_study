const getFactors = (n) => {
    let factors = new Set();
    let d = Math.ceil(Math.sqrt(n));
    
    while (d > 0) {
        if (n % d === 0) {
            factors.add(d);
            factors.add(n / d);
        }
        d--;
    }
    
    return [...factors].sort((a, b) => b - a);
}

function solution(brown, yellow) {
    let yellowRow = 1;
    let yellowCol = 1;
    
    const gridCnt = brown + yellow;
    const yellowFactors = getFactors(yellow);
    
    for (let i = 0; i < yellowFactors.length; i++) {
        yellowRow = yellowFactors[i];
        yellowCol = yellow / yellowFactors[i];
        
        if ((yellowRow >= yellowCol) && (gridCnt === (yellowRow + 2) * (yellowCol + 2))) {
            break;
        }
    }
    
    return [yellowRow + 2, yellowCol + 2];
}