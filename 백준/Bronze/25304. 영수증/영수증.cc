#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int x, n, i, sum = 0;
    cin>>x;
    cin>>n;
    for(i=0;i<n;i++) {
        int price, cnt;
        cin>>price>>cnt;
        sum += price*cnt;
    }
    if(x == sum) {
        cout<<"Yes"<<"\n";
    }
    else {
        cout<<"No"<<"\n";
    }
    return 0;
}