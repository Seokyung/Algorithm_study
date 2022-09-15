//1934 최소공배수
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

    int t;
    cin>>t;
    
    for(int i=0;i<t;i++) {
        int a, b, gcf, lcm;
        cin>>a>>b;

        if(a>b) gcf = gcd(a, b);
        else gcf = gcd(b, a);

        lcm = (a*b) / gcf;

        cout<<lcm<<"\n";
    }

    return 0;
}