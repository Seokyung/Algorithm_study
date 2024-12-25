function solution(my_string) {
    return [...my_string].filter((el, idx) => my_string.indexOf(el) === idx).join('');
}