//1904 01타일
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<long long> fibo;

    fibo.push_back(0);
    fibo.push_back(1);
    fibo.push_back(2);

    if(n>2) {
        for(int i=3;i<=n;i++) {
            long long tmp = fibo[i-1] + fibo[i-2];
            fibo.push_back(tmp%15746);
        }
    }

    cout<<fibo[n]%15746<<"\n";

    return 0;
}