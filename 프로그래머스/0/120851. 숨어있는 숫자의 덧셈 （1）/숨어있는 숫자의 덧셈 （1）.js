function solution(my_string) {
    let answer = 0;
    
    [...my_string].forEach((el) => {
        if ((el.charCodeAt() >= 48) && (el.charCodeAt() <= 57)) {
            answer += parseInt(el);
        }
    });
    
    return answer;
}