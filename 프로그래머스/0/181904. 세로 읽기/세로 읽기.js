function solution(my_string, m, c) {
    let answer = '';
    
    [...my_string].forEach((el, idx) => {
        if ((idx % m) === c - 1) {
            answer += el;
        }
    })
    
    return answer;
}