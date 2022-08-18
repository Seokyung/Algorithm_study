#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, tmp;
    set<string> part;
    cin>>s;
    for(int i=0;i<s.length();i++) {
        tmp = "";
        for(int j=i;j<s.length();j++) {
            tmp += s[j];
            part.insert(tmp);
        }
    }
    cout<<part.size()<<"\n";
    return 0;
}