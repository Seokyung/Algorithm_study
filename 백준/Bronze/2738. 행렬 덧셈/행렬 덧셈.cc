//2738 행렬 덧셈
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin>>n>>m;

    int matrix1[n][m];
    int matrix2[n][m];
    int res[n][m];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int x;
            cin>>x;

            matrix1[i][j] = x;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int x;
            cin>>x;

            matrix2[i][j] = x;
            
            res[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}