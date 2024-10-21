function solution(n) {
    let answer = 0;
    let d = 1;
    
    while (d <= Math.floor(Math.sqrt(n))) {
        if (n % d === 0) {
            answer += d;
            if ((n / d) !== d) {
                answer += (n / d);
            }
        }
        d++;
    }
    
    return answer;
}