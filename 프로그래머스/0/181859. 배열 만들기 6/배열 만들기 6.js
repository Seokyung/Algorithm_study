function solution(arr) {
    let answer = [];
    
    arr.forEach((el) => {
        if ((answer.length !== 0) && (answer[answer.length - 1] === el)) {
            answer.pop();
        } else {
            answer.push(el);
        }
    })
    
    return answer.length === 0 ? [-1] : answer;
}