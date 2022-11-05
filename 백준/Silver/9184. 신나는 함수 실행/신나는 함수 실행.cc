//9184 신나는 함수 실행
#include <iostream>
using namespace std;

//Memoziation 사용 (동일한 계산을 반복해야 할 때, 이전에 계산한 값을 메모리에 저장해 동일한 계산의 반복수행을 줄이는 기법의 알고리즘)
int memoziation[21][21][21] = {0, };

int w(int a, int b, int c) {
    if((a<=0) || (b<=0) || (c<=0)) {
        return 1;
    }
    else if((a>20) || (b>20) || (c>20)) {
        return w(20, 20, 20);
    }
    else if(memoziation[a][b][c]) {
        return memoziation[a][b][c];
    }
    else if((a<b) && (b<c)) {
        memoziation[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        return memoziation[a][b][c];
    }
    else {
        memoziation[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
        return memoziation[a][b][c];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    while(true) {
        cin>>a>>b>>c;
        if((a==-1) && (b==-1) && (c==-1)) {
            return 0;
        }
        else {
            int res = w(a, b, c);
            cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<res<<"\n";
        }
    }

    return 0;
}