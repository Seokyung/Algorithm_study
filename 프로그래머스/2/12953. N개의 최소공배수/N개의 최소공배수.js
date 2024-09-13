// 자연수 n을 소인수분해하는 함수
const getPrimeFactors = (num) => {
    const res = Array.from({length: num + 1}, () => 0);
    let n = num;
    let d = 2;
    
    while (n > 1) {
        if (n % d !== 0) {
            d++;
        } else {
            res[d] += 1;
            n /= d;
        }
    }
    
    return res;
}

function solution(arr) {
    let answer = 1;
    const sortedArr = arr.sort((a, b) => b - a);
    const primeFactors = Array.from({length: sortedArr[0] + 1}, () => 0);
    
    for (let i = 0; i < sortedArr.length; i++) {
        const factorArr = getPrimeFactors(arr[i]);
        
        for (let j = 0; j < factorArr.length; j++) {
            if (factorArr[j] > primeFactors[j]) {
                primeFactors[j] = factorArr[j];
            }
        }
    }
    
    for (let i = 0; i < primeFactors.length; i++) {
        if (primeFactors[i] !== 0) {
            answer *= Math.pow(i, primeFactors[i]);
        }
    }
    
    return answer;
}