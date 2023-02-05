#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max_idx = 0;
    int sum = 0;
    
    for(int i=0;i<3;i++) {
        if(sides[i] > sides[max_idx]) {
            max_idx = i;
        }
        sum += sides[i];
    }
    
    if (sides[max_idx] < (sum-sides[max_idx])) {
        answer = 1;
    }
    else {
        answer = 2;
    }
    
    return answer;
}