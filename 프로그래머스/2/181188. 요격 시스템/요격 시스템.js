function solution(targets) {
    let answer = 0;
    const sortedTargets = targets.sort((a, b) => a[1] - b[1]);
    let curRange = [-1, -1];
    
    for (let i = 0; i < sortedTargets.length; i++) {
        if (curRange[1] <= sortedTargets[i][0]) {
            answer++;
            curRange = sortedTargets[i];
        }
    }
    
    return answer;
}