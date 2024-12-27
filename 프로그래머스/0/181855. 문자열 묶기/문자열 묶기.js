function solution(strArr) {
    const arr = Array.from({length: 31}, () => 0);
    strArr.forEach((el) => arr[el.length]++);
    return Math.max(...arr);
}