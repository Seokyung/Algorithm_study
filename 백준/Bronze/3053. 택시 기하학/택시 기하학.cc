#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double r;
    cin>>r;

    double u, t;
    u = M_PI * r * r;
    t = 2 * r * r;

    cout << fixed;
    cout.precision(6);
    cout<<u<<"\n"<<t<<"\n";
    
    return 0;
}