//14888 연산자 끼워넣기
#include <iostream>
using namespace std;

int n;
int a[11];
int operators[4];
int max_res = -1000000001, min_res = 1000000001;

void calculate(int idx, int res) {
    if(idx == n) {
        if(max_res <= res) {
            max_res = res;
        }
        if(min_res >= res) {
            min_res = res;
        }

        return;
    }

    for(int i=0;i<4;i++) {
        if(operators[i] > 0) {
            operators[i]--;
            
            if(i==0) {
                calculate(idx+1, res + a[idx]);
            }
            else if(i==1) {
                calculate(idx+1, res - a[idx]);
            }
            else if(i==2) {
                calculate(idx+1, res * a[idx]);
            }
            else {
                calculate(idx+1, res / a[idx]);
            }

            operators[i]++;
        }
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    for(int i=0;i<4;i++) {
        cin>>operators[i];
    }

    calculate(1, a[0]);

    cout<<max_res<<"\n"<<min_res<<"\n";

    return 0;
}