#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int n, i;
    vector <int> v;
    vector <int> w;
    cin>>n;
    for(i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
        w.push_back(x);
    }
    sort(w.begin(), w.end());
    w.erase(unique(w.begin(), w.end()), w.end());
    for(i=0;i<n;i++) {
        cout<<lower_bound(w.begin(), w.end(), v[i]) - w.begin()<<" ";
    }
    return 0;
}