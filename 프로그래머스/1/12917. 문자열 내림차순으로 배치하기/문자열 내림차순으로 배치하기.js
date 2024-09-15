function solution(s) {
    const strArr = s.split('');
    
    strArr.sort((a, b) => { return b.charCodeAt() - a.charCodeAt() });
    
    return strArr.join('');
}