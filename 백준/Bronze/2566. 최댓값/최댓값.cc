//2566 최댓값
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max = 0, col, row;
    int matrix[9][9];

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            int x;
            cin>>x;

            if(x >= max) {
                max = x;
                col = i + 1;
                row = j + 1;
            }
        }
    }

    cout<<max<<"\n";
    cout<<col<<" "<<row<<"\n";

    return 0;
}