//5597 과제 안 내신 분..?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool submit[30] = {false};

    for(int i=0;i<28;i++) {
        int x;
        cin>>x;

        submit[x-1] = true;
    }

    for(int i=0;i<30;i++) {
        if(submit[i] == false) {
            cout<<i+1<<"\n";
        }
    }

    return 0;
}