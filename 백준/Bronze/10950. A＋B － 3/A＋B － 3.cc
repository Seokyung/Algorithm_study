#include <iostream>
using namespace std;
int main() {
    int t, a, b, i;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>a>>b;
        if(a>0 && b<10) {
            cout<<a+b<<endl;
        }
    }
    return 0;
}