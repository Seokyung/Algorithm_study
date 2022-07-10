#include <iostream>
using namespace std;
int main() {
    string s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int i;
    cin>>s;
    for(i=0;i<alpha.length();i++) {
        cout<<(int)s.find(alpha[i])<<" ";
    }
    return 0;
}