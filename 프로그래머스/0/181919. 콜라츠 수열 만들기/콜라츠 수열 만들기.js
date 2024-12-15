function solution(n) {
    let answer = [n];
    
    while (n !== 1) {
        if (n % 2 === 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
        answer.push(n);
    }
    
    return answer;
}