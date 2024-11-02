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

// 정규표현식으로 풀기
// function solution(babbling) {
//     const regexp1 = /(aya|ye|woo|ma)\1+/;
//     const regexp2 = /^(aya|ye|woo|ma)+$/;
//     return babbling.reduce((acc, word) => (
//         !regexp1.test(word) && regexp2.test(word) ? ++acc : acc
//     ), 0);
// }