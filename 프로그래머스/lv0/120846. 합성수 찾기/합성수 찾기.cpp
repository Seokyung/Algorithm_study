#include <string>
#include <vector>
#include <cmath>

using namespace std;

int find(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i == 0) {
            return 1;
        }
    }
    return 0;
}

int solution(int n) {
    int answer = 0;
    
    for(int i=4;i<=n;i++) {
        answer += find(i);
    }
    
    return answer;
}