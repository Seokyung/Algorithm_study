function solution(num_list) {
    let oddNum = '';
    let evenNum = '';
    num_list.forEach((el) => {
        if (el % 2 === 0) {
            evenNum += el;
        } else {
            oddNum += el;
        }
    });
    return parseInt(oddNum) + parseInt(evenNum);
}