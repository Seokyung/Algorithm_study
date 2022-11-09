//2563 색종이
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int area[101][101] = {0,};
    int overlap_sum = 0;

    for(int i=0;i<n;i++) {
        int x, y;
        cin>>x>>y;

        int overlapping_area = 0;

        for(int j=x;j<x+10;j++) {
            for(int k=y;k<y+10;k++) {
                if(area[j][k] == 0) {
                    area[j][k] = 1;
                }
                else {
                    overlapping_area++;
                }
            }
        }
        
        overlap_sum += overlapping_area;
    }

    cout<<((n * 100) - overlap_sum)<<"\n";

    return 0;
}