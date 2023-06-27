function solution(n) {
    let answer = [];
    let n_arr = n.toString(2).split("");
    let one_cnt = n_arr.filter(num => num !== "0").length;
    let bigger_num = n + 1;
    
    while(n < bigger_num) {
        let bigger_num_arr = bigger_num.toString(2).split("");
        let bigger_num_one_cnt = bigger_num_arr.filter(num => num !== "0").length;

        if(one_cnt === bigger_num_one_cnt) {
            return bigger_num;
        }
        
        bigger_num++;
    }
}