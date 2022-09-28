//9375 패션왕 신해빈
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        int n;
        vector<pair <string, string> > clothes;
        cin>>n;

        for(int j=0;j<n;j++) {
            string cname, ctype;
            cin>>cname>>ctype;

            clothes.push_back(pair<string, string>(ctype, cname));
        }

        sort(clothes.begin(), clothes.end());

        int idx = 0, res = 1;
        vector<int> cnt(n, 1);

        for(int k=0;k<n;k++) {
            if(clothes[k].first == clothes[k+1].first) {
                cnt[idx]++;
            }
            else {
                idx++;
            }
        }

        for(int l=0;l<idx;l++) {
            res *= (cnt[l]+1);
        }
        cout<<res-1<<"\n";
    }

    return 0;
}