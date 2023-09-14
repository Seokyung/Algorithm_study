function solution(n, arr1, arr2) {
    let answer = [];
    let arr1_map = [];
    let arr2_map = [];
    
    function toBinaryArr(num, arr) {
        if(num === 0) {
            if(arr.length !== n) {
                while(arr.length < n) {
                    arr.push(0);
                }
            }
            return arr.reverse();
        }
        if(num % 2 === 0) {
            arr.push(0);
        } else {
            arr.push(1);
        }
        return toBinaryArr(parseInt(num/2), arr);
    }
    
    for(let i = 0; i < n; i++) {
        arr1_map.push(toBinaryArr(arr1[i], new Array));
        arr2_map.push(toBinaryArr(arr2[i], new Array));
    }
    
    for(let i = 0; i < n; i++) {
        let str = "";
        arr1_map[i].map((el, idx) => {
            if(el === 0 && arr2_map[i][idx] === 0) {
                str += " ";
            } else {
                str += "#";
            }
        })
        answer.push(str);
    }
    
    return answer;
}