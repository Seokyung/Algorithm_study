function solution(a, b, c, d) {
    const diceMap = new Map();
    diceMap.set(a, 1);
    diceMap.set(b, diceMap.has(b) ? diceMap.get(b)+1 : 1);
    diceMap.set(c, diceMap.has(c) ? diceMap.get(c)+1 : 1);
    diceMap.set(d, diceMap.has(d) ? diceMap.get(d)+1 : 1);
    const diceArr = [...diceMap];
    
    if (diceMap.size === 1) {
        const p = diceArr[0][0];
        return 1111 * p;
    } else if (diceMap.size === 2) {
        if (diceArr[0][1] === 2) {
            return (diceArr[0][0] + diceArr[1][0]) * Math.abs(diceArr[0][0] - diceArr[1][0]);
        } else {
            const p = diceArr[0][1] > diceArr[1][1] ? diceArr[0][0] : diceArr[1][0];
            const q = diceArr[0][1] < diceArr[1][1] ? diceArr[0][0] : diceArr[1][0];
            return ((10 * p) + q) ** 2;
        }
    } else if (diceMap.size === 3) {
        const filterdDiceArr = diceArr.filter((el) => el[1] !== 2);
        return filterdDiceArr[0][0] * filterdDiceArr[1][0];
    } else {
        const sortedDiceArr = diceArr.sort((a, b) => a[0] - b[0]);
        return sortedDiceArr[0][0];
    }
}