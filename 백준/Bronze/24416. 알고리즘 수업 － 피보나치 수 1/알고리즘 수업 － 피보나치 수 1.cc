//24416 알고리즘 수업 - 피보나치 수 1
#include <iostream>
using namespace std;

int cnt_code1 = 0, cnt_code2 = 0;

int fibonacci_recursive(int n) {
    if(n==2 || n==1) {
        cnt_code1++;
        return 1; //코드1
    }
    else {
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
    }
}

int fibonacci_dp(int n) {
    int f[n];

    f[0] = 1;
    f[1] = 1;

    for(int i=2; i<n; i++) {
        cnt_code2++;
        f[i] = f[i-1] + f[i-2]; //코드2
    }

    return f[n-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    fibonacci_recursive(n);
    fibonacci_dp(n);

    cout<<cnt_code1<<" "<<cnt_code2<<"\n";

    return 0;
}