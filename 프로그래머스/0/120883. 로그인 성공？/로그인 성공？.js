function solution(id_pw, db) {
    let idIdx = -1;
    let pwIdx = -1;
    
    db.forEach((el, idx) => {
        if (el[0] === id_pw[0]) {
            idIdx = idx;
        }
        if (el[1] === id_pw[1]) {
            pwIdx = idx;
        }
    });
    
    return idIdx === pwIdx ? 'login' : idIdx === -1 ? 'fail' : 'wrong pw';
}