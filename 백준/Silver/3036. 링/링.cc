//3036 링
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

    int n, radius;
    cin>>n;

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;

        if(i==0) {
            radius = x;
        }
        else {
            if(radius>x) {
                if(radius%x==0) {
                    cout<<radius/x<<"/"<<1<<"\n";
                }
                else {
                    int gcf = gcd(radius, x);
                    cout<<radius/gcf<<"/"<<x/gcf<<"\n";
                }
            }
            else {
                if(x%radius==0) {
                    cout<<1<<"/"<<x/radius<<"\n";
                }
                else {
                    int gcf = gcd(x, radius);
                    cout<<radius/gcf<<"/"<<x/gcf<<"\n";
                }
            }
        }
    }

    return 0;
}