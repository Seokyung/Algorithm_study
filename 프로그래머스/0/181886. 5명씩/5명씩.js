function solution(names) {
    return names.filter((_, idx) => (idx + 1) % 5 === 1);
}