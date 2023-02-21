function solution(dots) {
    var x = 0, y = 0;
    for(let i=0;i<dots.length-1;i++) {
        if(Math.abs(dots[i][0] - dots[i+1][0]) > 0) {
            x =  Math.abs(dots[i][0] - dots[i+1][0]);
        }
        if(Math.abs(dots[i][1] - dots[i+1][1]) > 0) {
            y = Math.abs(dots[i][1] - dots[i+1][1])
        }
    }
    return x*y;
}