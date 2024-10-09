function solution(strArr) {
    return strArr.map((item, idx) => {
        if (idx % 2 === 0) {
            return item.toLowerCase();
        } else {
            return item.toUpperCase();
        }
    });
}