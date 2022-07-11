#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string s, word;
    int cnt = 0, i;
    getline(cin, s);

    stringstream ss(s);
    ss.str(s);

    while(ss>>word) {
        cnt++;
    }
    
    cout<<cnt<<"\n";
    return 0;
}