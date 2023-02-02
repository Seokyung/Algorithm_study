#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double sum = 0;
    double n = numbers.size();
    
    for(int i=0;i<n;i++) {
        sum += numbers[i];
    }
    
    answer = sum / n;
    
    return answer;
}