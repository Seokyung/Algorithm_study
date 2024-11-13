function solution(num, total) {
    const numArr = Array.from({length: num}, (_, i) => Math.floor(total / num) + i);
    let sum = numArr.reduce((acc, cur) => acc + cur);
    
    while (sum !== total) {
        sum = numArr.reduce((acc, cur) => acc + cur);
        if (sum === total) {
            return numArr;
        } else if (sum > total) {
            numArr.unshift(numArr[0] - 1);
            numArr.pop();
        } else {
            numArr.push(numArr[num - 1] + 1);
            numArr.shift();
        }
    }
    
    return numArr;
}