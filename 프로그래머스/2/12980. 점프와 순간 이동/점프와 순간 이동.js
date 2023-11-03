function solution(n)
{
    let cur = n;
    let battery = 0;
    
    while (cur > 0) {
        if(cur%2 === 0) {
            cur /= 2;
        } else {
            cur--;
            battery++;
        }
    }

    return battery;
}