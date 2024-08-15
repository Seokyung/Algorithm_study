function solution(nums) {
    const maxNum = nums.length / 2;
    
    const filteredArr = nums.filter((el ,idx) => nums.indexOf(el) === idx);
    
    return (filteredArr.length > maxNum) ? maxNum : filteredArr.length;
}