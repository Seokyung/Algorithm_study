#include <iostream>
using namespace std;
int main() {
    int t, r, i, j, k;
    string s;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>r>>s;
        for(j=0;j<s.length();j++) {
            for(k=0;k<r;k++) {
                cout<<s[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}