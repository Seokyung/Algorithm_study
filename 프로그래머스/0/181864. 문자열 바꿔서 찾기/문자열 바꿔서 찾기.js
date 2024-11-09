function solution(myString, pat) {
    const switchedString = [...myString].map((item) => item === 'A' ? 'B' : 'A').join('');
    return switchedString.includes(pat) & 1;
}