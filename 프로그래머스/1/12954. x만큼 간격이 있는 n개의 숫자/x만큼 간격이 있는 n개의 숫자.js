function solution(x, n) {
    let emptyArr = Array.from({length: n}, () => x);
    let answer = [x];
    
    emptyArr.reduce((acc, cur) => {
        const val = acc + cur;
        answer.push(val)
        return val;
    });
    
    return answer;
}