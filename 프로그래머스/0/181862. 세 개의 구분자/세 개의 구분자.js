function solution(myStr) {
    let answer = [];
    myStr = myStr.split('a').filter((el) => el.length > 0);
    
    for (let i = 0; i < myStr.length; i++) {
        let str = myStr[i].split('b').filter((el) => el.length > 0);
        for (let j = 0; j < str.length; j++) {
            answer.push(...str[j].split('c').filter((el) => el.length > 0));
        }
    }
    
    return answer.length === 0 ? ['EMPTY'] : answer;
}