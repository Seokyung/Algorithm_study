//1676 팩토리얼 0의 개수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 0;
    cin>>n;

    if(n<5) {
        cnt = 0;
    }
    else {
        for(int i=5;i<=n;i*=5) {
            cnt += n / i;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}