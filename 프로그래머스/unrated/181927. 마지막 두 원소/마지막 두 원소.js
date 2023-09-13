function solution(num_list) {
    let len = num_list.length - 1;
    num_list.push(num_list[len] > num_list[len - 1] ?
                  (num_list[len] - num_list[len - 1]) :
                  (num_list[len] * 2));
    return num_list;
}