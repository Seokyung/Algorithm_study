//2579 계단오르기
#include <iostream>
#include <vector>
using namespace std;

int find_max(int x, int y) {
    if(x>y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> stair;
    vector<int> dp;

    cin>>n;
    dp.resize(n);

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        stair.push_back(x);
    }

    dp[0] = stair[0];
    dp[1] = stair[0] + stair[1];
    dp[2] = find_max(stair[0], stair[1]) + stair[2];

    for(int i=3;i<n;i++) {
        dp[i] = find_max(dp[i-3] + stair[i-1], dp[i-2]) + stair[i];
    }

    cout<<dp[n-1]<<"\n";

    return 0;
}