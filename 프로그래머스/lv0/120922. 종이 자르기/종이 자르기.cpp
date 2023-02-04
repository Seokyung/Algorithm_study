#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    
    int min = (M < N) ? M : N;
    int max = (M > N) ? M : N;
    
    answer = (min-1) + ((max-1) * min);
    
    return answer;
}