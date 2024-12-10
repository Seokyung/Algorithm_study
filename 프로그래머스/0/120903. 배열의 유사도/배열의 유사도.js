function solution(s1, s2) {
    let answer = 0;
    let short = [];
    let long = [];
    
    if (s1.length > s2.length) {
        short = s2;
        long = s1;
    } else {
        short = s1;
        long = s2;
    }
    
    for (let i = 0; i < short.length; i++) {
        if (long.includes(short[i])) {
            console.log(short[i]);
            answer++;
        }
    }
    
    return answer;
}