function solution(my_string) {
    return [...my_string].filter((el) => el.charCodeAt() < 58)
                        .map((item) => Number(item))
                        .sort((a, b) => a - b);
}