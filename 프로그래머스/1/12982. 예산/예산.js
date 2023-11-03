function solution(d, budget) {
    let answer = 0;
    const sorted_arr = d.sort((a, b) => {return a - b});
   
    for (let i=0; i<d.length; i++) {
        budget -= d[i];
        if(budget < 0) {
            break;
        } else {
            answer++;
        }
    }
    
    return answer;
}