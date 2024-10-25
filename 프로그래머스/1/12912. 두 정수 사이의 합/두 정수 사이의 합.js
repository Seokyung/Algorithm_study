function solution(a, b) {
    let tmp = a;
    
    if (b > a) {
        a = b;
        b = tmp;
    }
    
    return ((a + b) * ((a - b + 1) / 2));
}