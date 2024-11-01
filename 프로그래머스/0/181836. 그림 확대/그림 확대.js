function solution(picture, k) {
    let answer = [];
    for (let i = 0; i < picture.length; i++) {
        let line = "";
        for (let j = 0; j < picture[i].length; j++) {
            line += picture[i][j].repeat(k);
        }
        for (let l = 0; l < k; l++) {
            answer.push(line);
        }
    }
    return answer;
}