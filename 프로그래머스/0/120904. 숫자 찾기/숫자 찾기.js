function solution(num, k) {
    const answer = [...String(num)].indexOf(String(k));
    return answer === -1 ? answer : answer + 1;
}