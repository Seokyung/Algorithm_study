//15649 N과 M(1)
#include <iostream>
using namespace std;

#define MAX 9

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
        if(visited[i] == true) {
            continue;
        }
        else {
            visited[i] = true;
            result[cnt] = i;

            permutation(cnt+1);

            visited[i] = false;
        }
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
