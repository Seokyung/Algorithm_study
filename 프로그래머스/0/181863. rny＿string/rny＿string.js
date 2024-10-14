function solution(rny_string) {
    let answer = '';
    const splitedString = rny_string.split('m');
    
    splitedString.forEach((el, idx) => answer += el + ((idx !== splitedString.length - 1) ? 'rn' : ''));
    
    return answer;
}