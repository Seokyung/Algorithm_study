function solution(x) {
    let sum = [...`${x}`].reduce((acc, cur) => parseInt(acc) + parseInt(cur));
    return (parseInt(x) % sum === 0);
}