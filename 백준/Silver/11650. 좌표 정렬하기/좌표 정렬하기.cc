#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n, x, y, i;
    vector<pair<int, int>> v;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>x>>y;
        v.push_back(pair<int, int>(x,y));
    }
    sort(v.begin(), v.end());
    for(i=0;i<n;i++) {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}