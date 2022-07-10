#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, i;
    cin>>n;
    char num[n];
    cin>>num;
    for(i=0;i<n;i++) {
        sum += num[i] - '0';
    }
    cout<<sum<<"\n";
    return 0;
}