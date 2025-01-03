function solution(numbers) {
    let answer = numbers.reduce((acc, cur) => acc + cur);
    return 45 - answer;
}