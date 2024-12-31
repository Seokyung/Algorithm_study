function solution(A, B) {
    let answer = 0;
    
    if (A === B) {
        return answer;
    } else {
        let strArr = [...A];
        
        while (answer < A.length) {
            let letter = strArr.pop();
            strArr.unshift(letter);
            answer++;
            
            if (strArr.join('') === B) {
                return answer;
            }
        }
        
        return -1;
    }
}