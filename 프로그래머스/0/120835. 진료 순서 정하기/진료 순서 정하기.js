function solution(emergency) {
    return emergency.map((el, idx) => [el, idx])
                    .sort((a, b) => b[0] - a[0])
                    .map((el, idx) => [...el, idx + 1])
                    .sort((a, b) => a[1] - b[1])
                    .map((el) => el[2]);
}