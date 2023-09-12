function solution(array, commands) {
    return commands.map((command) => {
        const [i, j, k] = command;
        const arr_el = array.slice(i-1, j).sort((a, b) => a-b)[k-1];
        return arr_el;
    });
}