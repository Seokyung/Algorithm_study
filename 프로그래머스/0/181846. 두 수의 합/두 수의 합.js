function solution(a, b) {
    let answer = [];
    let len = 0;
    let carry = 0;
    let arrA = [];
    let arrB = [];
    
    if (a.length >= b.length) {
        len = a.length;
        arrA = [...a].reverse();
        arrB = [...[...b].reverse(), ...Array(len - b.length).fill(0)];
    } else {
        len = b.length;
        arrA = [...b].reverse();
        arrB = [...[...a].reverse(), ...Array(len - a.length).fill(0)];
    }
    
    for (let i = 0; i < len; i++) {
        if (+arrA[i] + +arrB[i] + carry > 9) {
            answer.push((+arrA[i] + +arrB[i] + carry) % 10);
            carry = 1;
        } else {
            answer.push(+arrA[i] + +arrB[i] + carry);
            carry = 0;
        }
    }
    
    if (carry > 0) {
        answer.push(carry);
    }
    
    return answer.reverse().join('');
}