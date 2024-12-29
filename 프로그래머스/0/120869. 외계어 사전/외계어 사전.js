function solution(spell, dic) {
    let answer = 0;
    spell.sort();
    
    for (let i = 0; i < dic.length; i++) {
        let arr = [];
        
        [...dic[i]].forEach((el) => spell.includes(el) && arr.push(el));
        
        if (arr.sort().join('') === spell.join('')) {
            return 1;
        }
    }
    
    return 2;
}