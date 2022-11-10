//2587 대표값2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n[5];
    int sum = 0;

    for(int i=0;i<5;i++) {
        int x;
        cin>>x;

        n[i] = x;
        sum += x;
    }

    sort(n, n+5);

    cout<<sum/5<<"\n";
    cout<<n[2]<<"\n";

    return 0;
}