function solution(n_str) {
    // [1] while문 사용
    // const str = [...n_str];
    
    // while (str[0] === '0') {
        // str.shift();
    // }

    // return str.join('');
    
    // [2] 정규표현식 사용
    // return n_str.replace(/^0+/, '');
    
    // [3] 문자열을 숫자로 변경
    return Number(n_str) + '';
}