function solution(myString) {
    return [...myString].map((el) => el.charCodeAt() < 108 ? 'l' : el).join('');
}