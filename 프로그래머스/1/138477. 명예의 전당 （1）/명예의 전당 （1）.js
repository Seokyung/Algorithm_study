function solution(k, score) {
    let answer = [];
    
    return score.map((item, idx) => {
        answer.push(item);
        const sortedArr = answer.sort((a, b) => b - a);
        if (idx > k - 1) {
            return sortedArr[k - 1];
        } else {
            return sortedArr[idx];
        }
    });
}