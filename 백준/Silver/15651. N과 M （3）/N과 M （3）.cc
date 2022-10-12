//15651 N과 M(3)
#include <iostream>
using namespace std;

#define MAX 8

int n, m;
int result[MAX];
bool visited[MAX];

void print(int res[]) {
    for(int i=0;i<m;i++) {
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}

void permutation(int cnt) {
    if(cnt == m) {
        print(result);
        return;
    }
    for(int i=1;i<=n;i++) {
        result[cnt] = i;
        permutation(cnt+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;

    permutation(0);

    return 0;
}