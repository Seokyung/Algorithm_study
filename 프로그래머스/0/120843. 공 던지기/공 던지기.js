function solution(numbers, k) {
    let answer = (k * 2) - 1;
    return answer < numbers.length ? answer
    :
    answer % numbers.length === 0 ? numbers.length
    :
    answer % numbers.length;
}