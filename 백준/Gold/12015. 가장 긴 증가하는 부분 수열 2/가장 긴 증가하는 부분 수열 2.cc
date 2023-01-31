//12015 가장 긴 증가하는 부분 수열2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, idx = 0;
    cin>>n;

    int lis[n];

    for(int i=0;i<n;i++) {
        cin>>x;

        if(idx == 0) {
            lis[idx++] = x;
        }
        else {
            if(lis[idx-1] < x) {
                lis[idx++] = x;
            }
            else {
                lis[lower_bound(lis, lis+idx, x) - lis] = x;
            }
        }
    }

    cout<<idx<<"\n";

    return 0;
}