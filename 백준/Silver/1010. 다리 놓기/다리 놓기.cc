//1010 다리 놓기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    for(int k=0;k<t;k++) {
        int n, m;
        cin>>n>>m;

        int dp[31][31] = {0,};
        dp[1][0] = 1;
        dp[1][1] = 1;

        for(int i=2;i<=m;i++) {
            for(int j=0;j<=min(i, n);j++) {
                if((i==j) || (j==0)) {
                    dp[i][j] = 1;
                }
                else {
                    dp[i][j] = (dp[i-1][j-1]) + (dp[i-1][j]);
                }
            }
        }

        cout<<dp[m][n]<<"\n";
    }

    return 0;
}