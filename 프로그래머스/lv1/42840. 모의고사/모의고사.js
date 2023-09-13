function solution(answers) {
    let result = [];
    let std1 = [1, 2, 3, 4, 5], std2 = [2, 1, 2, 3, 2, 4, 2, 5], std3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    let std1_res = 0, std2_res = 0, std3_res = 0;
    
    for(let i = 0; i < answers.length; i++) {
        if(answers[i] === std1[i%std1.length]) {
            std1_res++;
        }
        if(answers[i] === std2[i%std2.length]) {
            std2_res++;
        }
        if(answers[i] === std3[i%std3.length]) {
            std3_res++;
        }
    }
    
    let max = Math.max(std1_res, std2_res, std3_res);
    
    if(max === std1_res) {
        result.push(1);
    }
    if(max === std2_res) {
        result.push(2);
    }
    if(max === std3_res) {
        result.push(3);
    }
    
    return result;
}