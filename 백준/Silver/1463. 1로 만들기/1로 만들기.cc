//1463 1로 만들기
#include <iostream>
#include <vector>
using namespace std;

int find_min(int x, int y) {
    if(x<y) {
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
    vector<int> dp;

    cin>>n;
    dp.resize(n+1);

    dp[0] = 0;
    dp[1] = 0;

    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + 1;

        if(i%2 == 0) {
            dp[i] = find_min(dp[i], dp[i/2] + 1);
        }

        if(i%3 == 0) {
            dp[i] = find_min(dp[i], dp[i/3] + 1);
        }
    }

    cout<<dp[n]<<"\n";

    return 0;
}