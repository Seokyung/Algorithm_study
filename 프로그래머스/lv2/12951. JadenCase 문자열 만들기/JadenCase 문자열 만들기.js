function solution(s) {
    let words = [...s.toLowerCase()];
    words[0] = words[0].toUpperCase();
    
    for(let i = 1; i < words.length; i++) {
        if((words[i] !== " ") && (words[i-1] === " ")) {
            words[i] = words[i].toUpperCase();
        }
    }
    
    return words.join("");
}