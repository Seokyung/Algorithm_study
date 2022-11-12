//9461 파도반 수열
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        int n;
        long long fibo[101] = {0,1,1,1,2,2,};
        
        cin>>n;

        if(n>5) {
            for(int j=6;j<=n;j++) {
                fibo[j] = fibo[j-1] + fibo[j-5];
            }
        }

        cout<<fibo[n]<<"\n";
    }

    return 0;
}