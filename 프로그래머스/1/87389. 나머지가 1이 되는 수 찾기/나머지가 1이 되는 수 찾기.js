function solution(n) {
    let answer = 2;
    
    while (answer < n) {
        if (n % answer === 1) {
            return answer;
        }
        answer++;
    }
    
    return answer;
}