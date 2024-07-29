function solution(s) {
    let answer = 0;
    
    const str = s.split('');
    let x = str[0];
    let letterCnt = 0;
    let otherLetterCnt = 0;
    
    for (let i = 0; i < str.length; i++) {
        if (x === str[i]) {
            letterCnt += 1;
        } else {
            otherLetterCnt += 1;
        }
        
        if (letterCnt === otherLetterCnt) {
            letterCnt = 0;
            otherLetterCnt = 0;
            x = str[i + 1];
            answer++;
        } else if (i === str.length - 1) {
            answer++;
        }
    }
    
    return answer;
}