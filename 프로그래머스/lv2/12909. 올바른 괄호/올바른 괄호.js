function solution(s){
    let depth = 0;
    
    for(let i=0; i<s.length; i++) {
        if(s[i] == '(') {
            depth++;
        } else {
            depth--;
        }
        
        if(depth < 0) {
            return false;
        }
    }
    
    return depth === 0;
}