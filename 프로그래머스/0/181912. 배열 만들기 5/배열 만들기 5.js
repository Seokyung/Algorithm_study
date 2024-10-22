function solution(intStrs, k, s, l) {
    let answer = [];
    
    intStrs.forEach((el) => 
                    (parseInt(el.slice(s, s + l)) > k) && answer.push(parseInt(el.slice(s, s + l))));
    
    return answer;
}