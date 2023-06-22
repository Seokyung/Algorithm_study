function compare(a, b) {
    return a - b;
}

function solution(s) {
    let answer = "";
    let numArr = s.split(" ");
    
    numArr.sort(compare);
    
    answer = numArr[0].toString() + " " + numArr[numArr.length - 1].toString();
    
    return answer;
}