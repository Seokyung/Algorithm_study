function solution(s){
    let p = 0;
    let y = 0;
    
    [...s].forEach((el) => {
        if (el.charCodeAt() === 80 || el.charCodeAt() === 112) {
            p++;
        } else if (el.charCodeAt() === 89 || el.charCodeAt() === 121) {
            y++;
        }
    })

    return p === y ? true : false;
}