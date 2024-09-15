function solution(n) {
    for (let i = 1; i <= n; i++) {
        if (i % 3 === 0 || String(i).includes("3")) {
            n += 1;
        }
    }
    
    return n;
}



// function solution(n) {
//     let answer = 0;
    
//     for (let i = 1; i <= n; i++) {
//         answer += 1;
        
//         if (i % 3 === 0 ||
//             i % 10 === 3 ||
//             Math.floor(i / 10) === 3 ||
//             answer % 3 === 0 ||
//             answer % 10 === 3 ||
//             Math.floor((answer % 100) / 10) === 3
//            ) {
//             while (answer % 3 === 0 ||
//                    answer % 10 === 3 ||
//                    Math.floor((answer % 100) / 10) === 3
//                   ) {
//                 answer += 1;
//             }
//         }
//     }
    
//     return answer;
// }