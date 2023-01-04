//9663 N-Queen
#include <iostream>
using namespace std;

int n, cases = 0;
int queen[14];

int locationCheck(int row) {
    for(int i=0;i<row;i++) {
        if((queen[i] == queen[row]) || (abs(i-row) == abs(queen[i] - queen[row]))) {
            return 0;
        }
    }
    return 1;
}

void nQueen(int row) {
    if(row == n) {
        cases++;
        return;
    }
    else {
        for(int col=0;col<n;col++) {
            queen[row] = col;
            if(locationCheck(row) == 1) {
                nQueen(row+1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    nQueen(0);

    cout<<cases<<"\n";

    return 0;
}