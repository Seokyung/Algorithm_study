function solution(numLog) {
    let answer = '';
    let prevNum = numLog[0];
    const numMap = {"1": "w", "-1": "s", "10": "d", "-10": "a"};
    
    for (let i = 1; i < numLog.length; i++) {
        answer += numMap[(numLog[i] - prevNum) + ""];
        prevNum = numLog[i];
    }
    
    return answer;
}