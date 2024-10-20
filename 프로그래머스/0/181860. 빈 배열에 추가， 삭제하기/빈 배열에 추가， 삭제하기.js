function solution(arr, flag) {
    let answer = [];
    
    for (let i = 0; i < flag.length; i++) {
        if (flag[i]) {
            answer.push(...Array.from({length: arr[i] * 2}, () => arr[i]));
        } else {
            answer = answer.slice(0, -arr[i]);
        }
    }
    
    return answer;
}