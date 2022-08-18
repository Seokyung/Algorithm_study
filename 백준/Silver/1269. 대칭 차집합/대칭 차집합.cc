#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, i;
    set<int> aa;
    set<int> bb;
    cin>>a>>b;
    for(i=0;i<a;i++) {
        int x;
        cin>>x;
        aa.insert(x);
    }
    for(i=0;i<b;i++) {
        int x;
        cin>>x;
        bb.insert(x);
    }
    vector<int> res;
    set_symmetric_difference(aa.begin(), aa.end(), bb.begin(), bb.end(), back_inserter(res));
    cout<<res.size()<<"\n";
    return 0;
}