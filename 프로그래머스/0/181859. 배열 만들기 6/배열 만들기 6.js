function solution(arr) {
    let answer = [];
    let i = 0;
    
    while (i < arr.length) {
        if ((answer.length !== 0) && (answer[answer.length - 1] === arr[i])) {
            answer.pop();
        } else {
            answer.push(arr[i]);
        }
        i++;
    }
    
    return answer.length === 0 ? [-1] : answer;
}