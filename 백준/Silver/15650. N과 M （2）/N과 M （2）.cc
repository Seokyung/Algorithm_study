//15650 N과 M(2)
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

void permutation(int cnt, int idx) {
    if(cnt == m) {
        print(result);
        return;
    }
    for(int i=idx;i<=n;i++) {
        if(visited[i] == true) {
            continue;
        }
        else {
            visited[i] = true;
            result[cnt] = i;
            idx++;

            permutation(cnt+1, idx);

            visited[i] = false;
        }
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