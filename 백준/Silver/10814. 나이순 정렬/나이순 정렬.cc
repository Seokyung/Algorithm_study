#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}
int main() {
    int n, i;
    vector <pair<int, string>> member;
    cin>>n;
    for(i=0;i<n;i++) {
        int age;
        string name;
        cin>>age>>name;
        member.push_back(pair<int, string>(age, name));
    }
    stable_sort(member.begin(), member.end(), compare);
    for(i=0;i<n;i++) {
        cout<<member[i].first<<" "<<member[i].second<<"\n";
    }
    return 0;
}