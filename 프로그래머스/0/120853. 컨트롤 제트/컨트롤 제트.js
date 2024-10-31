function solution(s) {
    let answer = 0;
    const s_arr = s.split(' ');
    for (let i = 0; i < s_arr.length; i++) {
        if (s_arr[i] === 'Z') {
            answer -= parseInt(s_arr[i-1]);
        } else {
            answer += parseInt(s_arr[i]);
        }
    }
    return answer;
}