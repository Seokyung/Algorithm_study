function solution(my_string, indices) {
    let answer = '';
    
    indices.sort((a, b) => a - b);
    
    answer += my_string.slice(0, indices[0]);
    
    for (let i = 1; i < indices.length; i++) {
        answer += my_string.slice(indices[i - 1] + 1, indices[i]);
    }
    
    answer += my_string.slice(indices[indices.length - 1] + 1);
    
    return answer;
}