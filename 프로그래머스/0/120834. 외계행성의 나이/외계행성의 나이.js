function solution(age) {
    return [...age.toString()].map((el) => String.fromCharCode(el.charCodeAt() + 49)).join('');
}