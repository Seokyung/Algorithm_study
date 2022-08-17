#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, i;
    vector<int> nn;
    vector<int> mm;
    cin>>n;
    for(i=0;i<n;i++) {
        int x;
        cin>>x;
        nn.push_back(x);
    }
    sort(nn.begin(), nn.end());
    cin>>m;
    for(i=0;i<m;i++) {
        int x;
        cin>>x;
        auto upr = upper_bound(nn.begin(), nn.end(), x);
        auto lwr = lower_bound(nn.begin(), nn.end(), x);
        mm.push_back(upr-lwr);
    }
    for(auto j:mm) {
        cout<<j<<" ";
    }
    return 0;
}