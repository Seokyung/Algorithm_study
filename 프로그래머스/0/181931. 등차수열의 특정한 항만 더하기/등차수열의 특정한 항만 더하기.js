function solution(a, d, included) {
    let answer = 0;
    
    included.forEach((el, idx) => {
        if (el) {
            answer += a + (d * idx);
        }
    });
    
    return answer;
}