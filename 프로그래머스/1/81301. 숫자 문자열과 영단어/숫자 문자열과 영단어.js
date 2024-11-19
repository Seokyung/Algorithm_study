function solution(s) {
    const numWordArr = [...s];
    const numWordMap = {"zero": 0, "one": 1, "two": 2,
                        "three": 3, "four": 4, "five": 5,
                        "six": 6, "seven": 7, "eight": 8,
                        "nine": 9,
                       };
    let answer = '';
    let numWord = '';
    
    while (numWordArr.length > 0) {
        let v = numWordArr.shift();
        
        if (v.charCodeAt() > 47 && v.charCodeAt() < 58) {
            answer += v;
            numWord = '';
        } else {
            numWord += v;
            if (numWordMap[numWord] !== undefined) {
                answer += numWordMap[numWord];
                numWord = '';
            }
        }
    }
    
    return +answer;
}