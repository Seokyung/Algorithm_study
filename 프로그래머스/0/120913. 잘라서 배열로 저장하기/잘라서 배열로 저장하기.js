function solution(my_str, n) {
    let answer = [];
    let d = 0;
    
    while (d < my_str.length) {
        answer.push(my_str.slice(d, d + n));
        d += n;
    }
    
    return answer;
}