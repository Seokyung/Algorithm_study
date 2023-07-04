function solution(n, words) {
    let spoken = [words[0], ];
    let pno = 0;
    let turn = 0;

    for (let i = 1; i < words.length; i++) {
        let curr_word = words[i];
        let prev_word = words[i-1];
        
        if(spoken.includes(curr_word) || curr_word[0] !== prev_word[prev_word.length-1]) {
            pno = ((spoken.length+1) % n === 0) ? n : (spoken.length+1) % n;
            turn = (n === pno) ? parseInt((spoken.length+1) / n) : parseInt((spoken.length+1) / n) + 1;
            break;
        }
        
        spoken.push(curr_word);
    }
    
    return [pno, turn];
}