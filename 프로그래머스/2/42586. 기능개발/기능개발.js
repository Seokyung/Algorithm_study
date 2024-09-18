function solution(progresses, speeds) {    
    const turnaroundTime = progresses.map((item, idx) =>
        Math.ceil((100 - item) / speeds[idx])
    );
    let answer = [];
    let deployCnt = 0;
    let day = turnaroundTime[0];
    
    for (let i = 0; i < progresses.length; i++) {
        if (turnaroundTime[i] > day) {
            answer.push(deployCnt);
            day = turnaroundTime[i];
            deployCnt = 1;
        } else {
            deployCnt++;
        }
    }
    
    answer.push(deployCnt);
    
    return answer;
}