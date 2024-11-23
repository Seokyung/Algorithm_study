function solution(arr, k) {
    const answer = new Set();
    arr.forEach((el) => answer.add(el));
    
    if (answer.size >= k) {
        return [...answer].slice(0, k);
    } else {
        return [...answer, ...Array.from({length: k - answer.size}, () => -1)];
    }
}