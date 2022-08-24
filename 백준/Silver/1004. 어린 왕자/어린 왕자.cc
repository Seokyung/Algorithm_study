#include <iostream>
#include <cmath>
using namespace std;

int cnt_inout(int x1, int y1, int x2, int y2, int n) {
    int cnt = 0;

    for(int i=0;i<n;i++) {
        int cx, cy, r;
        cin>>cx>>cy>>r;

        double dis1 = sqrt(pow(x1-cx, 2) + pow(y1-cy, 2));
        double dis2 = sqrt(pow(x2-cx, 2) + pow(y2-cy, 2));

        if(((dis1>r) && (dis2<r) || (dis1<r) && (dis2>r))) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        int x1, y1, x2, y2, n;
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        cout<<cnt_inout(x1, y1, x2, y2, n)<<"\n";
    }

    return 0;
}