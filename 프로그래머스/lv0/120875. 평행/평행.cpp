#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    if((double)((double)(dots[1][1]-dots[0][1])/(double)(dots[1][0]-dots[0][0])) == (double)((double)(dots[3][1]-dots[2][1])/(double)(dots[3][0]-dots[2][0]))) {
        //직선12, 직선34 비교
        return 1;
    }
    
    if((double)((double)(dots[2][1]-dots[0][1])/(double)(dots[2][0]-dots[0][0])) == (double)((double)(dots[3][1]-dots[1][1])/(double)(dots[3][0]-dots[1][0]))) {
        //직선13, 직선24 비교
        return 1;
    }
    
    if((double)((double)(dots[3][1]-dots[0][1])/(double)(dots[3][0]-dots[0][0])) == (double)((double)(dots[2][1]-dots[1][1])/(double)(dots[2][0]-dots[1][0]))) {
        //직선 14, 직선23 비교
        return 1;
    }
    
    return 0;
}