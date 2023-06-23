function ascSort(a, b) {
    return a - b;
}

function descSort(a, b) {
    return b - a;
}

function solution(A,B){
    let answer = 0;

    A.sort(ascSort);
    B.sort(descSort);
    
    for(let i in A) {
        answer += A[i] * B[i];
    }

    return answer;
}