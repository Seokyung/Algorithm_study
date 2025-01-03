function solution(code) {
    let answer = '';
    let mode = false;
    
    [...code].forEach((el, idx) => {
        if (mode) {
            if (el === '1') {
                mode = false;
            } else if (idx % 2 !== 0) {
                answer += el;
            }
        } else {
            if (el === '1') {
                mode = true;
            } else if (idx % 2 === 0) {
                answer += el;
            }
        }
    });
    
    return answer.length > 0 ? answer : 'EMPTY';
}