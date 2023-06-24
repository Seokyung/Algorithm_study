function solution(n) {
    let answer = (n%2 === 0 || n === 1) ? 1 : 2;
    let max = (n%2 === 0) ? n/2 : (n/2)+1;
    
    for(let i = 1; i < parseInt(max); i++) {
        let num = 0;
        
        for(let j = i; j < parseInt(max); j++) {
            num += j;
            
            if(num > n) {
                break;
            }
            
            if(num === n) {
                answer++;
                break;
            }
        }
    }
    
    return answer;
}