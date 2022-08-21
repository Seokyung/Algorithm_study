#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1) {
        int a, b, c;
        cin>>a>>b>>c;
        if((a==0) && (b==0) && (c==0)) return 0;
        int tri[3] = {a, b, c};
        sort(tri, tri+3);
        if(((tri[0]*tri[0])+(tri[1]*tri[1])) == (tri[2]*tri[2])) {
            cout<<"right"<<"\n";
        }
        else {
            cout<<"wrong"<<"\n";
        }
    }
    return 0;
}