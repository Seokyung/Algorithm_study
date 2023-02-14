#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int x=i;x<=j;x++) {
        string num = to_string(x);
        
        for(int y=0;y<num.size();y++) {
            if((num[y]-'0') == k) {
                answer++;
            }
        }
    }
    
    return answer;
}