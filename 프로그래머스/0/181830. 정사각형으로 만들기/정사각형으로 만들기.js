function solution(arr) {
    const row = arr.length;
    const col = arr[0].length;
    
    if (row === col) {
        return arr;
    } else if (row > col) {
        return arr.map((el) => [...el, ...Array.from({length: row - col}, () => 0)]);
    } else {
        arr.push(...Array.from({length: col - row}, () => Array.from({length: col}, () => 0)));
        return arr;
    }
}