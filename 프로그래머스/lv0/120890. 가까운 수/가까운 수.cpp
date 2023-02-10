#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    for(int i=0;i<array.size();i++) {
        if(abs(n-array[i]) < abs(n-array[answer])) {
            answer = i;
        }
    }
    
    return array[answer];
}