#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b) {
    if(a.first == b.first) {
        return a.second<b.second;
    }
    else {
        return a.first<b.first;
    }
}
int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int n, i;
    cin>>n;
    vector<pair<int, string>> str;
    for(i=0;i<n;i++) {
        string s;
        cin>>s;
        str.push_back(pair<int, string>(s.length(), s));
    }
    sort(str.begin(), str.end(), compare);
    for(i=0;i<n;i++) {
        if(str[i].second != str[i+1].second) {
            cout<<str[i].second<<"\n";
        }
    }
    return 0;
}