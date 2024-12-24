function solution(num_list, n) {
    return num_list
        .map((_, idx) => num_list.slice(idx, idx + n))
        .filter((_, idx) => idx % n === 0);
}