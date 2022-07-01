#include <iostream>
using namespace std;
int main() {
    int a, b, c, reward;
    cin>>a>>b>>c;
    if(a>=1 && a<=6 && b>=1 && b<=6 && c>=1 && c<=6) {
        if(a==b && b==c) {
            reward = 10000 + (a*1000);
        }
        else if(a!=b && b!=c && a!=c) {
            if(a>b) {
                if(a>c) {
                    reward = a*100;
                }
                else {
                    reward = c*100;
                }
            }
            else { //b>a
                if(b>c) {
                    reward = b*100;
                }
                else {
                    reward = c*100;
                }
            }
        }
        else {
            if((a==b && b!=c) || (a==c && c!=b)) {
                reward = 1000 + (a*100);
            }
            else if(a!=b && b==c) {
                reward = 1000 + (b*100);
            }
        }
        cout<<reward<<endl;
    }
    return 0;
}