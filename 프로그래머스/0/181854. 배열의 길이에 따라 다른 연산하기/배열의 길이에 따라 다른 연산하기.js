function solution(arr, n) {
    return arr.map((item, idx) => {
        if ((arr.length % 2 === 0) ^ (idx % 2 === 0)) {
            return item + n;
        } else {
            return item;
        }
    });
}