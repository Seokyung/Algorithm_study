#include <iostream>
using namespace std;
int main() {
    string a, b;
    int a_swap, b_swap, result, i;
    cin>>a>>b;
    a_swap = ((a[2]-48)*100) + ((a[1]-48)*10) + (a[0]-48);
    b_swap = ((b[2]-48)*100) + ((b[1]-48)*10) + (b[0]-48);
    result = a_swap>b_swap ? a_swap : b_swap;
    cout<<result<<"\n";
    return 0;
}