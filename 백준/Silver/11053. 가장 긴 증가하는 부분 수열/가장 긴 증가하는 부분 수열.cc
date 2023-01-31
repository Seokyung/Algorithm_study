//11053 가장 긴 증가하는 부분 수열
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    cin>>n;

    vector<int> a;
    vector<int> dp;

    dp.resize(n);

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }

    dp[0] = 1;

    for(int i=1;i<n;i++) {
        int val = 0;

        for(int j=0;j<i;j++) {
            if(a[j] < a[i]) {
                if(dp[j] > val) {
                    val = dp[j];
                }
            }
        }

        dp[i] = val + 1;
    }

    for(int i=0;i<n;i++) {
        if(dp[i] > res) {
            res = dp[i];
        }
    }

    cout<<res<<"\n";

    return 0;
}