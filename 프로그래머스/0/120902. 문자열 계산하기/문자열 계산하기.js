function solution(my_string) {
    const arr = my_string.split(' ');
    let answer = parseInt(arr[0]);
    let op = '';
    
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] === '+' || arr[i] === '-') {
            op = arr[i];
        } else {
            if (op === '+') {
                answer += parseInt(arr[i]);
            } else {
                answer -= parseInt(arr[i]);
            }
        }
    }
    
    return answer;
}