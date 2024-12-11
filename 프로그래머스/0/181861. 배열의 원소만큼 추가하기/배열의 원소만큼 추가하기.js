function solution(arr) {
    return arr.map((el) => Array.from({length: el}, () => el)).flat();
}