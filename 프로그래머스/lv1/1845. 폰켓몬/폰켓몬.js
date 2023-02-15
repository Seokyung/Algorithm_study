function solution(nums) {
    let n = nums.length/2;
    let arr = nums.filter((v ,i) => nums.indexOf(v) === i);
    return (arr.length > n) ? n : arr.length;
}