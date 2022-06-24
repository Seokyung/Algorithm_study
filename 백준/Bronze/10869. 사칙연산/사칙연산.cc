#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    if(a>=1 && b<=10000) {
        cout.precision(15);
        cout<<a+b<<endl;
        cout<<a-b<<endl;
        cout<<a*b<<endl;
        cout<<a/b<<endl;
        cout<<a%b<<endl;
    }
    else {
        cout<<"Input number out of bound!";
    }
    return 0;
}