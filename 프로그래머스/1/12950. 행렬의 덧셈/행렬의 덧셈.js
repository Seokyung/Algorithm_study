function solution(arr1, arr2) {
    return arr1.map((v1, idx1) => v1.map((v2, idx2) => v2 + arr2[idx1][idx2]));
}