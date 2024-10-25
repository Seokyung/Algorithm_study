function solution(arr1, arr2) {
    if (arr1.length === arr2.length) {
        const res1 = arr1.reduce((acc, cur) => acc + cur);
        const res2 = arr2.reduce((acc, cur) => acc + cur);
        if (res1 === res2) {
            return 0;
        } else {
            return res1 > res2 ? 1 : -1;
        }
    } else {
        return arr1.length > arr2.length ? 1 : -1;
    }
}