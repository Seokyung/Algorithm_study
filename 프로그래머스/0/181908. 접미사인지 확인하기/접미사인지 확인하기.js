function solution(my_string, is_suffix) {
    // slice() 메서드 사용
    return (my_string.slice(0 - is_suffix.length) === is_suffix) & 1;
    // endsWith() 메서드 사용
    // return my_string.endsWith(is_suffix) & 1;
}