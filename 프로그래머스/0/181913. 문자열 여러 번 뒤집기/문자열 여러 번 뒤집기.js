function solution(my_string, queries) {
    queries.forEach((el) => {
        const front = my_string.slice(0, el[0]);
        const rear = my_string.slice(el[1] + 1);
        const sortedStr = [...my_string.slice(el[0], el[1] + 1)].reverse().join('');
        my_string = front + sortedStr + rear;
    });
    
    return my_string;
}