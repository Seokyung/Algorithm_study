function solution(s) {
    let answer = [];
    const alphabet = Array.from({length: 26}, () => -1)
    
    for (let i = 0; i < s.length; i++) {
        if (alphabet[s[i].charCodeAt() - 97] !== -1) {
            answer.push(i - alphabet[s[i].charCodeAt() - 97]);
        } else {
            answer.push(-1);
        }
        
        alphabet[s[i].charCodeAt() - 97] = i;
    }
    
    return answer;
}