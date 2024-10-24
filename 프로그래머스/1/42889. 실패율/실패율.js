function solution(N, stages) {
    let answer = [];
    let challenger = stages.length;
    const players = Array.from({length: N + 2}, () => 0);
    
    stages.forEach((el) => players[el]++);
    
    for (let i = 1; i < N + 1; i++) {
        challenger -= players[i - 1];
        answer.push({stage: i, rate: players[i] / challenger});
    }
    
    answer.sort((a, b) => b.rate - a.rate);
    
    return answer.map((item) => item.stage);
}