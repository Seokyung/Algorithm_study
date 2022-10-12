//15652 N과 M(4)
#include <iostream>
using namespace std;

#define MAX 9

int n, m;
int result[MAX];

void print(int res[]) {
    for(int i=0;i<m;i++) {
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}

void permutation(int cnt, int idx) {
    if(cnt == m) {
        print(result);
        return;
    }
    for(int i=idx;i<=n;i++) {
        result[cnt] = i;
        permutation(cnt+1, idx);
        idx++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;

    permutation(0, 1);

    return 0;
}