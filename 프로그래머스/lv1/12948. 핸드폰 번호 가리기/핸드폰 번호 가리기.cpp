#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int n = phone_number.size();
    
    for(int i=0;i<n;i++) {
        if(i > n-5) {
            answer += phone_number[i];
        }
        else {
            answer += "*";
        }
    }
    
    return answer;
}