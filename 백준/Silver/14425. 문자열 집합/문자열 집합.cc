#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, i, cnt = 0;
    map <string, bool> str_map;
    cin>>n>>m;
    for(i=0;i<n;i++) {
        string s;
        cin>>s;
        str_map.insert(pair<string, bool>(s, true));
    }
    for(i=0;i<m;i++) {
        string s;
        cin>>s;
        if(str_map[s] == true) {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}