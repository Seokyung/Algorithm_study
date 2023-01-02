//1149 RGB거리
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, total_price = 0;
    cin>>n;

    int house[n][3];

    for(int i=0;i<n;i++) {
        int cost[3];
        cin>>cost[0]>>cost[1]>>cost[2];

        if(i==0) {
            house[i][0] = cost[0];
            house[i][1] = cost[1];
            house[i][2] = cost[2];
        }
        else {
            house[i][0] = ((house[i-1][1] < house[i-1][2]) ? house[i-1][1] : house[i-1][2]) + cost[0]; //집이 빨간색일때의 최소비용
            house[i][1] = ((house[i-1][0] < house[i-1][2]) ? house[i-1][0] : house[i-1][2]) + cost[1]; //집이 초록색일때의 최소비용
            house[i][2] = ((house[i-1][0] < house[i-1][1]) ? house[i-1][0] : house[i-1][1]) + cost[2]; //집이 파란색일때의 최소비용
        }
    }

    if(house[n-1][0] < house[n-1][1]) {
        total_price = house[n-1][0];
    }
    else {
        total_price = house[n-1][1];
    }
    if(house[n-1][2] < total_price) {
        total_price = house[n-1][2];
    }

    cout<<total_price<<"\n";

    return 0;
}