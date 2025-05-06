function solution(priorities, location) {
    let executionCnt = 0;
    const queue = priorities.map((priority, idx) => ({
        priority,
        isTarget: idx === location,
    }));
    
    while (priorities.length > 0) {
        const currProcess = queue.shift();
        if (!currProcess) {
            break;
        }
        
        const hasHigherPriority = queue.some((process) => process.priority > currProcess.priority); 
        if (hasHigherPriority) {
            queue.push(currProcess);
        } else {
            executionCnt += 1;
            if (currProcess.isTarget) {
                return executionCnt;
            }
        }
    }
    
    return executionCnt;
}