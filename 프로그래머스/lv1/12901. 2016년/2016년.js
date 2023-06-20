function solution(a, b) {
    let dayCnt = b + 4;
    
    const day = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];
    const month = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    
    for (let i = 0; i < a; i++) {
        dayCnt += month[i];
    }
    
    return day[dayCnt % 7];
}