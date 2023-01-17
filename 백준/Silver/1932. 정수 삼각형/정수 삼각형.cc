//1932 정수 삼각형
#include <iostream>
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
    int triangle[501][501];

    cin>>n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cin>>triangle[i][j];
        }
    }

    for(int i=n-1;i>0;i--) {
        for(int j=0;j<i;j++) {
            triangle[i-1][j] += find_max(triangle[i][j], triangle[i][j+1]);
        }
    }

    cout<<triangle[0][0]<<"\n";

    return 0;
}