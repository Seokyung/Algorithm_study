function solution(s) {
    let range_cnt = 0;
    let reduced_cnt = 0;
    
    while (s !== "1") {
        range_cnt++;
        let s_arr = s.split("");
        let reduced_arr = s_arr.filter(num => num !== "0");
        reduced_cnt += s_arr.length - reduced_arr.length;
        s = reduced_arr.length.toString(2);
    }
    
    return [range_cnt, reduced_cnt];
}