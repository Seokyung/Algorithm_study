//11051 이항 계수2 
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin>>n>>k;

    int dp[1001][1001]{0};
    dp[1][0] = 1;
    dp[1][1] = 1;

    for(int i=2;i<=n;i++) {
        for(int j=0;j<=min(i, k);j++) {
            if((i==j) || (j==0)) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = (dp[i-1][j-1]%10007) + (dp[i-1][j]%10007);
            }
        }
    }

    cout<<(dp[n][k])%10007<<"\n";

    return 0;
}