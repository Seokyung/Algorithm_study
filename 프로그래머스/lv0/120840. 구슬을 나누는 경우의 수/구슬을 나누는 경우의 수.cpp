#include <string>
#include <vector>

using namespace std;

int pick(int n, int m) {
    if(m == n) {
        return 1;
    }
    else if(m == 1) {
        return n;
    }
    else {
        return pick(n-1, m-1) + pick(n-1, m);
    }
}

int solution(int balls, int share) {
    int answer = 0;
    
    answer = pick(balls, share);
    
    return answer;
}