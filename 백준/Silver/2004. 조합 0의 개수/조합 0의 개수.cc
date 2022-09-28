//2004 조합 0의 개수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin>>n>>m;

    int cntTwo_n = 0, cntFive_n = 0, cntTwo_nm = 0, cntFive_nm = 0, cntTwo_m = 0, cntFive_m = 0;
    long long int i;

    for(i=2;i<=n;i*=2) {
        cntTwo_n += n / i;
    }
    for(i=2;i<=n-m;i*=2) {
        cntTwo_nm += (n-m) / i;
    }
    for(i=2;i<=m;i*=2) {
        cntTwo_m += m / i;
    }

    for(i=5;i<=n;i*=5) {
        cntFive_n += n / i;
    }
    for(i=5;i<=n-m;i*=5) {
        cntFive_nm += (n-m) / i;
    }
    for(i=5;i<=m;i*=5) {
        cntFive_m += m / i;
    }

    int two = cntTwo_n-(cntTwo_nm+cntTwo_m);
    int five = cntFive_n-(cntFive_nm+cntFive_m);

    cout<<((two<five)?two:five)<<"\n";

    return 0;
}