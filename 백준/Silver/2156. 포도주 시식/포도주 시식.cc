//2156 포도주 시식
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
    vector<int> wine;
    vector<int> dp;

    cin>>n;
    dp.resize(n+1);

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        wine.push_back(x);
    }

    dp[0] = wine[0];
    dp[1] = wine[0] + wine[1];
    dp[2] = find_max(wine[0], wine[1]) + wine[2];
    dp[3] = find_max(dp[0] + wine[2], dp[1]) + wine[3];

    for(int i=4;i<n;i++) {
        dp[i] = find_max(find_max(dp[i-4] + wine[i-1], dp[i-3] + wine[i-1]), dp[i-2]) + wine[i];
    }

    cout<<find_max(dp[n-2], dp[n-1])<<"\n";

    return 0;
}