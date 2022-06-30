#include <iostream>
using namespace std;
int main() {
    int h, m;
    cin>>h>>m;
    if(h>=0 && h<=23 && m>=0 && m<=59) {
        if(m<45) {
            m+=15;
            h-=1;
            if(h<0) {
                h=23;
            }
        }
        else {
            m-=45;
        }
        cout<<h<<" "<<m<<endl;
    }
    return 0;
}