function solution(arr, divisor) {
    const answer = arr.sort((a, b) => a - b).filter((el) => el % divisor === 0);
    return answer.length === 0 ? [-1] : answer;
}