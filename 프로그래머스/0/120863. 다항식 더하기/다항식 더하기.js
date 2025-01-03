function solution(polynomial) {
    let x = 0;
    let n = 0;
    let arr = polynomial.split(' ').join('');
    arr = arr.split('+');
    
    arr.forEach((el) => {
        if (el.includes('x')) {
            if (el.slice(0, -1) === '') {
                x += 1;
            } else {
                x += +el.slice(0, -1);
            }
        } else {
            n += +el;
        }
    });
    
    if (x !== 0 && n !== 0) {
        return `${x === 1 ? '' : x}x + ${n}`;
    } else if (x === 0) {
        return n + '';
    } else {
        return `${x === 1 ? '' : x}x`;
    }
}