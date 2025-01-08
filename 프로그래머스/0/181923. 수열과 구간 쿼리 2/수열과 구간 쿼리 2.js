function solution(arr, queries) {
    let answer = [];
    
    for (let i = 0; i < queries.length; i++) {
        let n = -1;
        
        for (let j = queries[i][0]; j <= queries[i][1]; j++) {
            if (arr[j] > queries[i][2]) {
                if (n === -1) {
                    n = arr[j];
                } else {
                    n = n > arr[j] ? arr[j] : n;
                }
            }
        }
        
        answer.push(n);
    }
    
    return answer;
}