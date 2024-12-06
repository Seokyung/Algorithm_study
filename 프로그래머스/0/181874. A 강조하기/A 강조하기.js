function solution(myString) {
    return [...myString].map((el) => {
        if (el === 'a' || el === 'A') {
            return 'A';
        } else {
            return el.toLowerCase();
        }
    }).join('');
}