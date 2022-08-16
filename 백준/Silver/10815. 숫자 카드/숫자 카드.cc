#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n, m, i;
    vector <int> nn;
    vector <int> mm;
    cin>>n;
    for(i=0;i<n;i++) {
        int x;
        cin>>x;
        nn.push_back(x);
    }
    cin>>m;
    for(i=0;i<m;i++) {
        int x;
        cin>>x;
        mm.push_back(x);
    }
    sort(nn.begin(), nn.end());
    for(i=0;i<m;i++) {
        if(binary_search(nn.begin(), nn.end(), mm[i])) {
            cout<<"1 ";
        }
        else {
            cout<<"0 ";
        }
    }
    return 0;
}