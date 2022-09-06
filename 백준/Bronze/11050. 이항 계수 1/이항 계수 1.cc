//11050 이항 계수1
#include <iostream>
using namespace std;

int factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin>>n>>k;

    if((k<0) || (k>n)) {
        cout<<0<<"\n";
    }
    else {
        cout<<factorial(n)/(factorial(k)*factorial(n-k))<<"\n";
    }

    return 0;
}