#include <iostream>
using namespace std;
int main() {
    int n, i, sum = 0;
    cin>>n;
    if(n>=1 && n<=10000) {
        for(i=1;i<=n;i++) {
            sum+=i;
        }
        cout<<sum<<endl;
    }
}