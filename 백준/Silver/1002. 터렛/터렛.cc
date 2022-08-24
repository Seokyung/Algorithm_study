#include <iostream>
#include <cmath>
using namespace std;

int cnt_location (int x1, int y1, int r1, int x2, int y2, int r2) {
    int cnt = 0;
    double dis = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

    if((x1 == x2) && (y1 == y2) && (r1 == r2)) {
        cnt = -1;
    }
    else if(dis > (r1+r2)) {
        cnt = 0;
    }
    else if(dis < abs(r1-r2)) {
        cnt = 0;
    }
    else if(dis == abs(r1-r2)) {
        cnt = 1;
    }
    else if(dis == (r1+r2)) {
        cnt = 1;
    }
    else {
        cnt = 2;
    }

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, x1, y1, x2, y2, r1, r2;
    cin>>t;

    for(int i=0;i<t;i++) {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        cout<<cnt_location(x1, y1, r1, x2, y2, r2)<<"\n";
    }

    return 0;
}