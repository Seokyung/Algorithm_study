const controlMap = {"w": 1, "s": -1, "d": 10, "a": -10};

function solution(n, control) {
    [...control].forEach((el) => n += controlMap[el]);
    return n;
}