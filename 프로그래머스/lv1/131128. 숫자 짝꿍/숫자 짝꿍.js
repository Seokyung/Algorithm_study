function compare(a, b) {
    return b - a;
}

function getNumCnt(num) {
    let numArr = Array.from({length: 10}, () => 0);
    
    for(let i = 0; i < num.length; i++) {
        numArr[Number(num[i])]++;
    }
    
    return numArr;
}

function solution(X, Y) {
    let commonNums = [];
    
    let numsX = getNumCnt(X);
    let numsY = getNumCnt(Y);
    
    for(let i = 0; i < 10; i++) {
        if((numsX[i] !== 0) && (numsY[i] !== 0)) {
            let minCnt = numsX[i] < numsY[i] ? numsX[i] : numsY[i];
            for(let j = 0; j < minCnt; j++) {
                commonNums.push(i);
            }
        }
    }
    
    if(commonNums.length === 0) {
        return "-1";
    } else {
        let result = commonNums.sort(compare);
        
        if(result[0] === 0) {
            return "0";
        } else {
            return result.join("");
        }
    }
}