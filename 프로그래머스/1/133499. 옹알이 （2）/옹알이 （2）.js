function solution(babbling) {
    let answer = 0;
    const babbleList = ['aya', 'ye', 'woo', 'ma'];
    
    for (let i = 0; i < babbling.length; i++) {
        let babble = [...babbling[i]];
        let currBabble = '';
        let prevBabble = '';
        
        while (babble.length > 0) {
            currBabble += babble.shift();
            if ((babbleList.includes(currBabble)) && (prevBabble !== currBabble)) {
                prevBabble = currBabble;
                currBabble = '';
            }
        }
        
        if (currBabble === '') {
            answer++;
        }
    }
    
    return answer;
}