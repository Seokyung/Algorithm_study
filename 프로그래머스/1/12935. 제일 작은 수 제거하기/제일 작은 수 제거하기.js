function solution(arr) {
    const min = Math.min(...arr);
    const filteredArr = arr.filter((el) => el !== min);
    return filteredArr.length === 0 ? [-1] : filteredArr;
}