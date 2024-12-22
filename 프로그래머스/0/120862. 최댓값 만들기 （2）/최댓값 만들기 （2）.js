function solution(numbers) {
    let answer1 = numbers.filter((el) => el >= 0).sort((a, b) => b - a);
    let answer2 = numbers.filter((el) => el < 0).sort((a, b) => b - a);
    
    if (answer1.length === 1 && answer2.length === 1) {
        return numbers[0] * numbers[1];
    }
    
    if (answer1.length < 2) {
        return answer2[0] * answer2[1];
    }
    
    if (answer2.length < 2) {
        return answer1[0] * answer1[1];
    }
    
    return answer1[0] * answer1[1] > answer2[0] * answer2[1] ? answer1[0] * answer1[1] : answer2[0] * answer2[1];
}