#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, i, cnt = 0;
    set<string> list;
    vector<string> res;
    cin>>n>>m;
    for(i=0;i<n;i++) {
        string s;
        cin>>s;
        list.insert(s);
    }
    for(i=0;i<m;i++) {
        string s;
        cin>>s;
        if(list.find(s) != list.end()) {
            cnt++;
            res.push_back(s);
        }
    }
    sort(res.begin(), res.end());
    cout<<cnt<<"\n";
    for(i=0;i<cnt;i++) {
        cout<<res[i]<<"\n";
    }
    return 0;
}