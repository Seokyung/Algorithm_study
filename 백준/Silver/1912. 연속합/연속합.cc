//1912 연속합
#include <iostream>
using namespace std;

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    int dp[100001];
    
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr[i] = x;
    }

    dp[0] = arr[0];
    int result = dp[0];

    for(int i=1;i<n;i++) {
        dp[i] = max((dp[i-1] + arr[i]), arr[i]); //i-1번째 원소를 포함한 최대 연속합 + i번째 원소값 vs i번째 원소값 중 더 큰 값을 dp배열에 저장
        result = max(result, dp[i]); //현재까지의 가장 큰 연속합 vs dp[i]의 값 중 더 큰 값을 result에 저장
    }

    cout<<result<<"\n";

    return 0;
}