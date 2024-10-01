function solution(survey, choices) {
    let answer = '';
    const typeMap = new Map([['R', 0], ['T', 0],
                            ['C', 0], ['F', 0],
                            ['J', 0], ['M', 0],
                            ['A', 0], ['N', 0]]);
    
    for (let i = 0; i < choices.length; i++) {
        const disagree = survey[i][0];
        const agree = survey[i][1];
        
        if (choices[i] < 4) {
            // disagree
            typeMap.set(disagree, (typeMap.get(disagree) + (4 - choices[i])));
        } else if (choices[i] > 4) {
            // agree
            typeMap.set(agree, (typeMap.get(agree) + (choices[i] - 4)));
        }
    }
    
    const typeArr = [...typeMap];
    
    for (let i = 0; i < typeArr.length; i += 2) {
        answer += typeArr[i][1] >= typeArr[i+1][1] ? typeArr[i][0] : typeArr[i+1][0]
    }
    
    return answer;
}