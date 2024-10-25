function solution(strings, n) {
    return strings.sort((a, b) => {
        if (a[n].charCodeAt() === b[n].charCodeAt()) {
            if (a > b) {
                return 1;
            } else {
                return -1;
            }
        } else {
            return a[n].charCodeAt() - b[n].charCodeAt();
        }
    });
}