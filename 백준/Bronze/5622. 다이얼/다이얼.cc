#include <iostream>
using namespace std;
int main() {
    string tel;
    cin>>tel;
    int time = 0, i;
    for(i=0;i<tel.length();i++) {
        if(tel[i]<=67) {
            time += 3;
        }
        else if(tel[i]<=70) {
            time += 4;
        }
        else if(tel[i]<=73) {
            time += 5;
        }
        else if(tel[i]<=76) {
            time += 6;
        }
        else if(tel[i]<=79) {
            time += 7;
        }
        else if(tel[i]<=83) {
            time += 8;
        }
        else if (tel[i]<=86) {
            time += 9;
        }
        else {
            time += 10;
        }
    }
    cout<<time<<"\n";
    return 0;
}