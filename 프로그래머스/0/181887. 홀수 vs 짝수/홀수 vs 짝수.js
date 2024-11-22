function solution(num_list) {
    let odd = 0, even = 0;
    num_list.forEach((el, i) => (i + 1) % 2 === 0 ? even += el : odd += el)
    return odd > even ? odd : even;
}