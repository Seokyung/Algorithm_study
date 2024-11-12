function solution(k, m, score) {
    let answer = 0;
    const apples = score.sort((a, b) => b - a);
    
    for (let i = 0; i < Math.floor(score.length / m); i++) {
        const apple = apples[(i * m) + m - 1];
        answer += (apple * m);
    }
    
    return answer;
}