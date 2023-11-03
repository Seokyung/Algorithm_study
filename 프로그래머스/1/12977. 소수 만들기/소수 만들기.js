function get_prime_num(n) {
    for(let i=2; i<=parseInt(Math.sqrt(n)); i++){
        if(n%i === 0) {
            return false;
        }
    }
    return true;
}

function solution(nums) {
    let answer = 0;
    let visited = Array.from({length: nums.length}, () => 0);
    
    nums.sort((a, b) => {return a-b});
    
    for(let i=0; i<nums.length-2; i++) {
        let sum = nums[i];
        visited[i] = 1;
        for(let j=i+1; j<nums.length-1; j++) {
            if(visited[j] !== 1) {
                sum += nums[j];
                visited[j] = 1;
                for(let k=j+1; k<nums.length; k++) {
                    if(visited[k] !== 1) {
                        sum += nums[k];
                        visited[k] = 1;
                        
                        if(get_prime_num(sum)) {
                            answer++;
                        }
                        
                        sum -= nums[k];
                        visited[k] = 0;
                    }
                }
                sum -= nums[j];
                visited[j] = 0;
            }
        }
        sum -= nums[i];
        visited[i] = 0;
    }
    
    return answer;
}