//10844 쉬운 계단 수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    cin>>n;

    int dp[101][10] = {0, };

    for(int i=1;i<10;i++) {
        dp[1][i] = 1;
    }

    for(int i=2;i<=n;i++) {
        for(int j=0;j<10;j++) {
            if(j == 0) {
                dp[i][j] = dp[i-1][j+1];
            }
            else if(j == 9) {
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            }

            dp[i][j] %= 1000000000;
        }
    }

    for(int i=0;i<10;i++) {
        res = (res + dp[n][i]) % 1000000000;
    }

    cout<<res<<"\n";

    return 0;
}