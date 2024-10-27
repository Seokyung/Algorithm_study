function solution(my_string, n) {
    return [...my_string].map((item) => item.repeat(n)).join('');
}