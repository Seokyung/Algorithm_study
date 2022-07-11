#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0, i, j, k;
    string s;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>s;
        bool flag = true;
        for(j=0;j<s.length();j++) {
            for(k=0;k<j;k++) {
                if(s[j] != s[j-1] && s[j] == s[k]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}