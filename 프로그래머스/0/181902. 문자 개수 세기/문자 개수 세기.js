function solution(my_string) {
    const answer = Array.from({length: 52}, () => 0);
    [...my_string].forEach((el) =>
                           answer[el.charCodeAt() < 91 ? el.charCodeAt() - 65 : el.charCodeAt() - 71]++);
    return answer;
}