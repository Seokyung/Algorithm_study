function solution(my_string) {
    let answer = 0;
    let num = '';
    
    [...my_string].forEach((el) => {
        if (el.charCodeAt() > 47 && el.charCodeAt() < 58) {
            num += el;
        } else {
            answer += +num;
            num = '';
        }
    });
    
    if (num !== '') {
        answer += +num;
    }
    
    return answer;
}