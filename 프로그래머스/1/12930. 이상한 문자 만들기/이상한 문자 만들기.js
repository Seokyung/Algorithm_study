function solution(s) {
    let answer = [];
    const s_arr = s.split(' ');
    
    for (let i = 0; i < s_arr.length; i++) {
        const word = [...s_arr[i]].map((item, idx) => {
            if (idx % 2 === 0) {
                return item.toUpperCase();
            } else {
                return item.toLowerCase();
            }
        });
        answer.push(word.join(''));
    }
    
    return answer.join(' ');
}