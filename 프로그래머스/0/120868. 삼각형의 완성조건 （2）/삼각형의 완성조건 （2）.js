function solution(sides) {
    let answer = 0;
    const sideSet = new Set();
    const longerSide = Math.max(...sides);
    const shorterSide = Math.min(...sides);
    
    // [1] 나머지 한 변이 가장 긴 변인 경우
    // longerSide + 1 ~ (longerSide + shorterSide - 1)
    // const a = longerSide + shorterSide - 1 - longerSide;
    for (let i = longerSide + 1; i <= longerSide + shorterSide - 1; i++) {
        sideSet.add(i);
    }
    
    // [2] 나머지 한 변이 가장 긴 변이 아닌 경우 (longerSide가 가장 긴 변인 경우)
    // longerSide - shorterSide + 1 ~ longerSide
    // const b = longerSide - (longerSide - shorterSide + 1) + 1;
    for (let i = longerSide - shorterSide + 1; i <= longerSide; i++) {
        sideSet.add(i);
    }
    
    return sideSet.size;
}