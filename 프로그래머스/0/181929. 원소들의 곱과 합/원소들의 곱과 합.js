function solution(num_list) { 
    const multiple = num_list.reduce((acc, cur) => cur * acc);
    const sqaure = num_list.reduce((acc, cur) => cur + acc) ** 2;
    return (multiple < sqaure) & 1;
}