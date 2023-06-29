function solution(n) {
    let fibo_arr = [0, 1];
    
    for(let i = 2; i <= n; i++) {
        fibo_arr.push((fibo_arr[i-2] % 1234567) + (fibo_arr[i-1] % 1234567));
    }
    
    return fibo_arr[n] % 1234567;
}