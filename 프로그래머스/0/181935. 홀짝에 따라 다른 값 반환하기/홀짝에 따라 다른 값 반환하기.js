function solution(n) {
    let answer = 0;
    let d = 1;
    
    if (n % 2 === 0) {
        while (d <= n) {
            if (d % 2 === 0) {
                answer += d ** 2;
            }
            d++;
        }
    } else {
        answer = (n + 1) * ((n + 1) / 4);
    }
    
    return answer;
}