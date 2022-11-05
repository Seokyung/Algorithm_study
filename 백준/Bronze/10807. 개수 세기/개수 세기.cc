//10807 개수 세기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, v, cnt  = 0;
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        num[i] = x;
    }

    cin>>v;

    for(int i=0;i<n;i++) {
        if(num[i] == v) {
            cnt++;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}