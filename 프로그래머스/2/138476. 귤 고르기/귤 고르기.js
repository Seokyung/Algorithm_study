function solution(k, tangerine) {
    let answer = 0;
    let tangerineCnt = 0;
    
    tangerine.sort((a, b) => b - a);
    
    const cntArr = Array.from({length: tangerine[0] + 1}, () => 0);
    
    for (let i = 0; i < tangerine.length; i++) {
        cntArr[tangerine[i]]++;
    }
    
    const sortedArr = cntArr.sort((a, b) => b - a);
    
    for (let i = 0; i < cntArr.length; i++) {
        if (tangerineCnt >= k) {
            break;
        } else {
            tangerineCnt += cntArr[i];
            answer++;
        }
    }
    
    return answer;
}