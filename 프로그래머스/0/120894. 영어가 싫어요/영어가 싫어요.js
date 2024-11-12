function solution(numbers) {
    const numberMap = { zero: 0, one: 1, two: 2,
                        three: 3, four: 4, five: 5,
                        six: 6, seven: 7, eight: 8, nine: 9
                      };
    const numberArr = [...numbers];
    let answer = [];
    let num = '';
    
    while (numberArr.length > 0) {
        num += numberArr.shift();
        if (numberMap[num] !== undefined) {
            answer.push(numberMap[num]);
            num = '';
        }
    }
    
    return parseInt(answer.join(''));
}