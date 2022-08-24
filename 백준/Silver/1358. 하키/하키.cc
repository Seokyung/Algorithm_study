#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w, h, x, y, p, r, cnt = 0;
    cin>>w>>h>>x>>y>>p;

    r = h/2;

    for(int i=0;i<p;i++) {
        int px, py;
        cin>>px>>py;

        double pr1 = sqrt(pow(px-x, 2) + pow(py-(y+r), 2));
        double pr2 = sqrt(pow(px-(x+w), 2) + pow(py-(y+r), 2));

        if(((px>=x)&&(py>=y)) && ((px>=x)&&(py<=(y+h))) && ((px<=(x+w))&&(py>=y)) && ((px<=(x+w))&&(py<=(y+h)))) {
            cnt++;
        }
        else if((pr1<=r) || (pr2<=r)) {
            cnt++;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}