#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a;
    cin>>n;

    int div[n];
    for(int i=0;i<n;i++) {
        cin>>div[i];
    }

    sort(div, div+n);

    if(sizeof(div) == 1) {
        a = div[0] * div[0];
    }
    else {
        a = div[0] * div[n-1];
    }

    cout<<a<<"\n";

    return 0;
}