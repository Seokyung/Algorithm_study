#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, i;
    map <string, int> poke_num;
    vector <string> poke_name;
    cin>>n>>m;
    for(i=0;i<n;i++) {
        string s;
        cin>>s;
        poke_num.insert(pair<string, int>(s, i+1));
        poke_name.push_back(s);
    }
    for(i=0;i<m;i++) {
        string s;
        cin>>s;
        if(s[0] >= 65 && s[0] <= 90) {
            cout<<poke_num[s]<<"\n";
        }
        else {
            cout<<poke_name[stoi(s)-1]<<"\n";
        }
    }
    return 0;
}