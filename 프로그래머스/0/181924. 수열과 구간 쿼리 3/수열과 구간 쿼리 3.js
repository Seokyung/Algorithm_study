function solution(arr, queries) {
    for (let k = 0; k < queries.length; k++) {
        const [i, j] = queries[k];
        const tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    return arr;
}