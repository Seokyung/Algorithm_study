function solution(order) {
    const nums = [3, 6, 9];
    let answer = 0;
    
    [...String(order)].forEach((el) => {
        if (nums.includes(Number(el))) {
            answer++;
        }
    });
    
    return answer;
}