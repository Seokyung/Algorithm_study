const getFactorial = (n) => {
    if (n === 1) {
        return n;
    } else {
        return n * factorial(n - 1);
    }
}

function solution(n) {
    let answer = 0;
    let factorial = 1;
    const sqrt = Math.ceil(Math.sqrt(n));
    
    for (let i = 1; i <= sqrt; i++) {
        factorial *= i;
        
        if (factorial > n) {
            return answer;
        } else {
            answer++;
        }
    }
    
    return answer;
}