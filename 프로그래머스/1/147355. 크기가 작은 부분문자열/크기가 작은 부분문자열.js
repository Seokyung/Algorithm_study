function solution(t, p) {
    let answer = 0;
    
    for (let i = 0; i < t.length - p.length + 1; i++) {
        let num = parseInt(t.slice(i, i + p.length));
        if (num <= parseInt(p)) {
            answer++;
        }
    }
    
    return answer;
}