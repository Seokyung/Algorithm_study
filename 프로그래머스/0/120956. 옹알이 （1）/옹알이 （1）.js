const pronunciation = ["aya", "ye", "woo", "ma"];

const checkBabble = (word) => {
    if (word.length === 0) {
        return true;
    }
    
    const isExist = pronunciation.find((el) => word.includes(el));
    if (isExist) {
        const newWord = word.split(isExist);
        return checkBabble(newWord[0]) && checkBabble(newWord[1]);
    } else {
        return false;
    }
}

function solution(babbling) {
    let answer = 0;
    
    for (let i = 0; i < babbling.length; i++) {
        if (checkBabble(babbling[i])) {
            answer++;
        }
    }
    
    return answer;
}