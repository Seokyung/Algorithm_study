function solution(myStr) {
    // for문을 사용하는 풀이
    let answer = [];
    myStr = myStr.split('a').filter((el) => el.length > 0);
    
    for (let i = 0; i < myStr.length; i++) {
        let str = myStr[i].split('b').filter((el) => el.length > 0);
        for (let j = 0; j < str.length; j++) {
            answer.push(...str[j].split('c').filter((el) => el.length > 0));
        }
    }
    
    return answer.length === 0 ? ['EMPTY'] : answer;
    
    // regExp를 사용하는 풀이
    // return myStr.match(/[^a-c]+/g) || ['EMPTY'];
}