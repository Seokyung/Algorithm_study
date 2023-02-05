#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    vector<string> food_arr;
    food_arr.resize(food.size());
    
    for(int i=1;i<food.size();i++) {
        for(int j=0;j<food[i]/2;j++) {
            food_arr[i] += to_string(i);
        }
    }
    
    for(int i=0;i<food_arr.size();i++) {
        answer += food_arr[i];
    }
    answer += "0";
    for(int i=food_arr.size()-1;i>=0;i--) {
        answer += food_arr[i];
    }
    
    return answer;
}