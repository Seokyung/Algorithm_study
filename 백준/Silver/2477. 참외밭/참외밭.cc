#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, w = 0, wi, h = 0, hi;
    vector<pair<int, int>> rec;

    cin>>k;

    for(int i=0;i<6;i++) {
        int d, l;
        cin>>d>>l;
        rec.push_back(pair<int, int>(d, l));
        if(d <= 2) {
            if(l > w) {
                w = l;
                wi = i;
            }
        }
        else {
            if(l > h) {
                h = l;
                hi = i;
            }
        }
    }
    
    int pos = wi;
    if(((wi+1) == hi) || ((wi==5) && (hi==0))) {
        pos = hi;
    }

    cout<<((w*h*k) - (rec[(pos+2)%6].second * rec[(pos+3)%6].second * k))<<"\n";
    
    return 0;
}