function solution(array, commands) {
    let answer = [];
    
    for(let i = 0; i < commands.length; i++) {
        const sliced_arr = array.slice(commands[i][0] - 1, commands[i][1]);
        sliced_arr.sort((a, b) => {return a - b});
        answer.push(sliced_arr[commands[i][2] - 1])
    }
    
    return answer;
}