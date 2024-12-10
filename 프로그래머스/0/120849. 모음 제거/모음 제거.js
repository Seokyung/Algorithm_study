function solution(my_string) {
    const vowel = ['a', 'e', 'i', 'o', 'u'];
    return [...my_string].filter((el) => !vowel.includes(el)).join('');
}