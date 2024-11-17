function solution(array) {
    if (array.length === 1) {
        return array[0];
    } else {
        const arrMap = new Map();
        
        array.forEach((el) => arrMap.set(el, arrMap.has(el) ? arrMap.get(el) + 1 : 1));
        
        const sortedMap = [...arrMap].sort((a, b) => b[1] - a[1]);
        
        if (arrMap.size === 1) {
            return sortedMap[0][0];
        } else {
            return sortedMap[0][1] === sortedMap[1][1] ? -1 : sortedMap[0][0];
        }
    }
}