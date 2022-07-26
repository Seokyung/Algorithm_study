#include <iostream>
using namespace std;
char board[51][51];
char WB[8][8] = {
    'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};
char BW[8][8] = {
    'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};
int WB_cnt(int m, int n) {
    int i, j, cnt = 0;
    for(i=0;i<8;i++) {
        for(j=0;j<8;j++) {
            if(board[m+i][n+j] != WB[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}
int BW_cnt(int m, int n) {
    int i, j, cnt = 0;
    for(i=0;i<8;i++) {
        for(j=0;j<8;j++) {
            if(board[m+i][n+j] != BW[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int m, n, i, j, cnt = 64;
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            cin>>board[i][j];
        }
    }
    int white, black;
    for(i=0;i<=(m-8);i++) {
        for(j=0;j<=(n-8);j++) {
            white = WB_cnt(i, j);
            black = BW_cnt(i, j);
            if(white<black) {
                cnt = (white<cnt) ? white : cnt;
            }
            else {
                cnt = (black<cnt) ? black : cnt;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}