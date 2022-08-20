#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x1, x2, x3, y1, y2, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int resX = (x1^x2)^x3;
    int resY = (y1^y2)^y3;
    cout<<resX<<" "<<resY<<"\n";
    return 0;
}