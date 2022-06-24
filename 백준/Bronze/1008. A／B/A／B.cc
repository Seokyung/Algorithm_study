#include <iostream>
using namespace std;
int main() {
    double a, b, result;
    cin>>a>>b;
    if(a>0 && b<10) {
        result = a / b;
        cout.precision(15);
        cout<<result;
    }
    else {
        cout<<"Input number out of bound!";
    }
    return 0;
}