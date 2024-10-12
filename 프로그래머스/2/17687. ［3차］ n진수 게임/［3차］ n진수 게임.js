function solution(n, t, m, p) {
    let numArr = [];
    const turnCnt = t * m;
    const tubeTurnArr = Array.from({length: t}, (_, idx) => p + (m * idx) - 1);
    
    for (let i = 0; i < turnCnt; i++) {
        if (numArr.length === turnCnt) {
            break;
        }
        let curNumStr = i.toString(n).toUpperCase() + "";
        numArr.push([...curNumStr]);
    }
    
    numArr = numArr.flat();
    
    const answerArr = tubeTurnArr.map((item) => numArr[item]);
    
    return answerArr.join('');
}