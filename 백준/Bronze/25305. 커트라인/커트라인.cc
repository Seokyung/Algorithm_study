#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int i, int j) {
    return j<i;
}
int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n, k, i;
    vector <int> score;
    cin>>n>>k;
    for(i=0;i<n;i++) {
        int a;
        cin>>a;
        score.push_back(a);
    }
    sort(score.begin(), score.end(), compare);
    cout<<score[k-1]<<"\n";
    return 0;
}