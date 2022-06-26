#include <iostream>
using namespace std;
int main() {
    int x, y;
    int ya, yb, yc;
    cin>>x>>y;
    if(x>=100 && x<=999 && y>=100 && y<=999) {
        ya = y%10;
        yb = (y%100)/10;
        yc = y/100;
        cout<<x*ya<<endl;
        cout<<x*yb<<endl;
        cout<<x*yc<<endl;
        cout<<x*y<<endl;
    }
    return 0;
}