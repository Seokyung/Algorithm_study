function solution(a, b) {
    return parseInt('' + a + b) > parseInt('' + b + a) ? parseInt('' + a + b) : parseInt('' + b + a);
}