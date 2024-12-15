function solution(num_str) {
    return [...num_str].reduce((acc, cur) => parseInt(acc) + parseInt(cur), 0);
}