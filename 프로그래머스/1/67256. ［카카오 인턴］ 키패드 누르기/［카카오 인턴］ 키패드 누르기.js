function solution(numbers, hand) {
    let answer = '';
    let left = [3, 0];
    let right = [3, 2];
    const keypads = {1: [0, 0], 2: [0, 1], 3: [0, 2],
                     4: [1, 0], 5: [1, 1], 6: [1, 2],
                     7: [2, 0], 8: [2, 1], 9: [2, 2],
                     0: [3, 1]};
    
    for (let i = 0; i < numbers.length; i++) {
        let currHand = '';
        if (numbers[i] % 3 === 1) {
            currHand = 'L';
        } else if ((numbers[i] % 3 === 0) && (numbers[i] !== 0)) {
            currHand = 'R';
        } else {
            const leftDistance = Math.abs(keypads[numbers[i]][0] - left[0]) + Math.abs(keypads[numbers[i]][1] - left[1]);
            const rightDistance = Math.abs(keypads[numbers[i]][0] - right[0]) + Math.abs(keypads[numbers[i]][1] - right[1]);
            if (leftDistance === rightDistance) {
                if (hand === 'left') {
                    currHand = 'L';
                } else { 
                    currHand = 'R';
                }
            } else if (leftDistance < rightDistance) {
                currHand = 'L';
            } else {
                currHand = 'R';
            }
        }
        
        if (currHand === 'L') {
            left = keypads[numbers[i]];
        } else {
            right = keypads[numbers[i]];
        }
        
        answer += currHand;
    }
    
    return answer;
}