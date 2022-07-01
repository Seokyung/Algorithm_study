#include <iostream>
using namespace std;
int main() {
    int h, m, time, tmp;
    cin>>h>>m;
    cin>>time;
    if(h>=0 && h<=23 && m>=0 && m<=59 && time>=0 && time<=1000) {
        if(m+time<=59) {
            m+=time;
            cout<<h<<" "<<m<<endl;
        }
        else {
            tmp=time/60;
            h+=tmp;
            if(h>23){
                h-=24;
            }
            m=(m+time)-(tmp*60);
            if(m>59){
                m-=60;
                h++;
                if(h>23){
                    h-=24;
                }
            }
            cout<<h<<" "<<m<<endl;
        }
    }
    return 0;
}