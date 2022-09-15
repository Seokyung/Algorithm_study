#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a%b == 0) {
        return b;
    }
    else {
        return gcd(b, a%b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, gcf, lcm;
    cin>>a>>b;

    if(a>b) gcf = gcd(a, b);
    else gcf = gcd(b, a);

    lcm = (a*b) / gcf;

    cout<<gcf<<"\n"<<lcm<<"\n";

    return 0;
}