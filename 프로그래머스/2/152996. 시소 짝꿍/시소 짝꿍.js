function solution(weights) {
    let answer = 0;   
    const weightMap = new Map();
    
    weights.forEach((item) =>
                    weightMap.set(item, (weightMap.get(item) || 0) + 1));
    
    weightMap.forEach((cnt, weight) => {
        if (cnt > 1) {
            answer += (cnt * (cnt - 1)) / 2;
        }
        if (weightMap.has(weight * 2)) {
            answer += cnt * weightMap.get(weight * 2);
        }
        if (weightMap.has((weight * 3) / 2)) {
            answer += cnt * weightMap.get((weight * 3) / 2);
        }
        if (weightMap.has((weight * 4) / 3)) {
            answer += cnt * weightMap.get((weight * 4) / 3);
        }
    })
    
    return answer;
}