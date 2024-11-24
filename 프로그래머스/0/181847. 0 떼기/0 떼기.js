function solution(n_str) {
    // while문 사용
//     const str = [...n_str];
    
//     while (str[0] === '0') {
//         str.shift();
//     }

//     return str.join('');
    
    // 문자열을 숫자로 변경
    return Number(n_str) + '';
}