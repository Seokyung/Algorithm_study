function solution(arr) {
    const slicedArr = arr.slice(arr.indexOf(2), arr.lastIndexOf(2) + 1);
    return slicedArr.length > 0 ? slicedArr : [-1];
}