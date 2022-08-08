#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) {
        return a.first<b.first;
    }
    else {
        return a.second<b.second;
    }
}
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
    sort(v.begin(), v.end(), compare);
    for(i=0;i<n;i++) {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}