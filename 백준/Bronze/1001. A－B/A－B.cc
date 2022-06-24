#include <iostream>
using namespace std;
int main() {
    int a, b, result;
    cin>>a>>b;
    if(a>0 && b<10) {
        result = a - b;
        cout<<result;
    }
    return 0;
}